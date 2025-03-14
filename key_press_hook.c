/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_hook.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:45:27 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 20:47:38 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_press_hook_help(int keycode, t_info *info, int x, int y)
{
	if (keycode == KEY_K)
		make_rasengan(x, y, info);
	get_player_position(info, info->map_info.map);
	if (info->player_info.x % MAXSCREEN_SIZE == 0
		|| info->player_info.y % MAXSCREEN_SIZE == 0)
		mlx_clear_window(info->mlx, info->window);
	put_image_to_window(info, info->map_info.map);
	return (0);
}

int	key_press_hook(int keycode, t_info *info)
{
	int	x;
	int	y;

	x = info->player_info.x;
	y = info->player_info.y;
	if (keycode == KEY_W)
		go_up(&(info->map_info.map[y][x]),
			&(info->map_info.map[y - 1][x]), info);
	else if (keycode == KEY_A)
		go_left(&(info->map_info.map[y][x]),
			&(info->map_info.map[y][x - 1]), info);
	else if (keycode == KEY_D)
		go_right(&(info->map_info.map[y][x]),
			&(info->map_info.map[y][x + 1]), info);
	else if (keycode == KEY_S)
		go_down(&(info->map_info.map[y][x]),
			&(info->map_info.map[y + 1][x]), info);
	else if (keycode == ESC)
	{
		info_free(info);
		map_clear(info->map_info.map);
		exit(0);
	}
	return (key_press_hook_help(keycode, info, x, y));
}
