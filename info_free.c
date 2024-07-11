#include "so_long.h"

void	info_free(t_info *info)
{
    if (info->image_info.player)
        mlx_destroy_image(info->mlx, info->image_info.player);
    if (info->image_info.exit)
        mlx_destroy_image(info->mlx, info->image_info.exit);
    if (info->image_info.item)
        mlx_destroy_image(info->mlx, info->image_info.item);
    if (info->image_info.tile)
        mlx_destroy_image(info->mlx, info->image_info.tile);
    if (info->image_info.wall)
        mlx_destroy_image(info->mlx, info->image_info.wall);
    if (info->window)
        mlx_destroy_window(info->mlx, info->window);
    if (info->mlx)
        free(info->mlx);
}
