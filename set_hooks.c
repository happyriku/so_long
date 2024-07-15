/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_hooks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:16:37 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/14 17:16:38 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	set_hooks(t_info *info)
{
	int	key_press_mask;
	int	window_close_mask;
	int	exposure_mask;

	key_press_mask = 1L << 0;
	window_close_mask = 1L << 17;
	exposure_mask = 1L << 15;
	mlx_hook(info->window, 2, key_press_mask, key_press_hook, info);
	mlx_hook(info->window, 33, window_close_mask, window_close_hook, info);
	mlx_hook(info->window, 12, exposure_mask, exposure_hook, info);
}
