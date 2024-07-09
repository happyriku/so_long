#include "so_long.h"

void	get_images(t_info *info)
{
	info->image_info.player = mlx_xpm_file_to_image(info->mlx, PLAYER_IMAGE, &info->image_info.size, &info->image_info.size);
	if (info->image_info.player == NULL)
		print_error(info, "failed to get player image");
	info->image_info.exit = mlx_xpm_file_to_image(info->mlx, EXIT_IMAGE, &info->image_info.size, &info->image_info.size);
	if (info->image_info.exit == NULL)
		print_error(info, "failed tp get exit image");
	info->image_info.item = mlx_xpm_file_to_image(info->mlx, ITEM_IMAGE, &info->image_info.size, &info->image_info.size);
	if (info->image_info.item == NULL)
		print_error(info, "failed to get item image");
	info->image_info.tile = mlx_xpm_file_to_image(info->mlx, TILE_IMAGE, &info->image_info.size, &info->image_info.size);
	if (info->image_info.tile == NULL)
		print_error(info, "failed to get tile image");
	info->image_info.wall = mlx_xpm_file_to_image(info->mlx, WALL_IMAGE, &info->image_info.size, &info->image_info.size);
	if (info->image_info.wall == NULL)
		print_error(info, "failed to get wall image");
}

void	make_window(t_info *info)
{
	int	s_height;
	int	s_width;

	if (info->map_info.height < MAXSCREEN_SIZE)
		s_height = info->map_info.height * (PIXEL_BIT);
	else
		s_height = MAXSCREEN_SIZE * (PIXEL_BIT + 1);
	if (info->map_info.width < MAXSCREEN_SIZE)
		s_width = info->map_info.width * (PIXEL_BIT);
	else
		s_width = MAXSCREEN_SIZE * (PIXEL_BIT + 1);
	info->window = mlx_new_window(info->mlx, s_width, s_height, "so_long");
	if (info->window == NULL)
		print_error(info, "failed to create window");
}

void	*get_image_from_info(t_info *info, char c)
{
	if (c == 'P')
		return (info->image_info.player);
	else if (c == 'E')
		return (info->image_info.exit);
	else if (c == 'C')
		return (info->image_info.item);
	else if (c == '0')
		return (info->image_info.tile);
	else if (c == '1')
		return (info->image_info.wall);
}

void	put_image_to_window(t_info *info, char **map)
{
	int	x;
	int	y;
	int	page_x;
	int	page_y;
	void	*img;

	page_x = (info->player_info.x / MAXSCREEN_SIZE) * MAXSCREEN_SIZE;
	page_y = (info->player_info.y / MAXSCREEN_SIZE) * MAXSCREEN_SIZE;
	y = 0;
	while (y < MAXSCREEN_SIZE && map[page_y + y])
	{
		x = 0;
		while (x < MAXSCREEN_SIZE && map[page_y + y][page_x + x])
		{
			img = get_image_from_info(info, "C");
			mlx_put_image_to_window(info->mlx, info->window,
				img, x * PIXEL_BIT, y * PIXEL_BIT);
			x++;	
		}
		y++;
	}
}

void    start_mlx(t_info *info)
{
	info->mlx = mlx_init();
	if (info->mlx == NULL)
		print_error(info, "mlx_init was failed !");
	info->image_info.size = PIXEL_BIT;
	get_images(info);
	get_player_position(info, info->map_info.map);
	make_window(info);
	put_image_to_window(info, info->map_info.map);
}