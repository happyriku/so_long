/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_player_can_goal.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:39:37 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 20:40:14 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_player_can_goal(t_info *info)
{
	if (info->player_info.item_count == info->map_info.item)
	{
		info_free(info);
		map_clear(info->map_info.map);
		ft_printf("Game clear !\n");
		exit(0);
	}
	else
		return ;
}
