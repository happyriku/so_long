/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_position.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 19:39:29 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/21 14:10:08 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	swap_position(t_info *info, char *current_position, char *next_position)
{
	char	tmp;

	tmp = *current_position;
	*current_position = *next_position;
	*next_position = tmp;
	info->player_info.move_count += 1;
	ft_printf("player move count : %d\n", info->player_info.move_count);
}

void	get_rasengan_position(char **map, size_t *x, size_t *y)
{
	*x = 0;
	*y = 0;
	while (map[*y])
	{
		*x = 0;
		while (map[*y][*x])
		{
			if (map[*y][*x] == 'R')
				return ;
			(*x)++;
		}
		(*y)++;
	}
}

void	swap_position_to_rasengan(t_info *info)
{
	char	**map;
	int		i;

	map = info->map_info.map;
	if (map[info->rasengan_y][info->rasengan_x + 1] != '1')
	{
		map[info->rasengan_y][info->rasengan_x] = info->rasengan_back;
		info->rasengan_back = map[info->rasengan_y][info->rasengan_x + 1];
		map[info->rasengan_y][info->rasengan_x + 1] = 'R';
	}
	else if (map[info->rasengan_y][info->rasengan_x + 1] == '1')
	{
		map[info->rasengan_y][info->rasengan_x] = info->rasengan_back;
		put_image_to_window(info, info->map_info.map);
		return ;
	}
	else
		return ;
	i = 0;
	while (i < 10000000)
		i++;
	put_image_to_window(info, info->map_info.map);
	info->rasengan_x++;
	swap_position_to_rasengan(info);
}
