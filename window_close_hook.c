/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window_close_hook.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 19:41:30 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 19:41:47 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	window_close_hook(t_info *info)
{
	map_clear(info->map_info.map);
	info_free(info);
	exit(0);
	return (0);
}

int	exposure_hook(t_info *info)
{
	put_image_to_window(info, info->map_info.map);
	return (0);
}
