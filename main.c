/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:09:44 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/09 19:34:29 by rishibas         ###   ########.fr       */
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
int main(int argc, char **argv)
{
    t_info info;

    if (argc <= 1)
        return(1);
    check_map_name(argv[1]);
    info = (t_info){0}; // t_info型のメンバを全て初期化
    create_map(&info, argv[1]);
    start_mlx(&info);
    set_hooks(&info);
    return (0);
}