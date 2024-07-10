#include "so_long.h"

int window_close_hook(t_info *info)
{
    exit(0);
    return (0);
}

int exposure_hook(t_info *info)
{
    put_image_to_window(info, info->map_info.map);
    return (0);
}