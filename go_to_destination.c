/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   go_to_destination.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:44:47 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 20:45:12 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	go_up(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	go_left(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	go_right(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	go_down(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	make_rasengan(int x, int y, t_info *info)
{
	info->rasengan_back = info->map_info.map[y][x + 1];
	info->map_info.map[y][x + 1] = 'R';
	get_rasengan_position(info->map_info.map,
		&info->rasengan_x, &info->rasengan_y);
	put_image_to_window(info, info->map_info.map);
	swap_position_to_rasengan(info);
	return ;
}
