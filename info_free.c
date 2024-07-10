#include "so_long.h"

void    info_free(t_info *info)
{
    int i;

    i = 0;
    while (info->map_info.map[i])
    {
		free(info->map_info.map[i]);
		i++;
    }
	free(info->map_info.map);
}
