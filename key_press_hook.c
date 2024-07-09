#include "so_long.h"

int key_press_hook(int keycode, t_info *info)
{
	int	x;
	int	y;

	x = info->player_info.x;
	y = info->player_info.y;
	if (keycode == 'W')
		go_up(info->map_info.map[y][x], info->map_info.map[y - 1][x], info);
	else if (keycode == 'A')
		go_left(info->map_info.map[y][x], info->map_info.map[y][x - 1], info);
	else if (keycode == 'D')
		go_right(info->map_info.map[y][x], info->map_info.map[y][x + 1], info);
	else if (keycode == 'S')
		go_down(info->map_info.map[y][x], info->map_info.map[y + 1][x]);
	else if (keycode == ESC)
		exit(0);
	get_player_position(info, info->map_info.map);
	if (info->player_info.x % MAXSCREEN_SIZE == 0 || info->player_info.y % MAXSCREEN_SIZE == 0)
		mlx_clear_window(info->mlx, info->window);
	put_image_to_window(info, info->map_info.map);
	return (0);
}
