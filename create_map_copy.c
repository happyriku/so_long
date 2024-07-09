#include "so_long.h"

char    **create_map_copy(t_info *info)
{
    char    **copy_map;
    int     i;

    copy_map = (char **)malloc(sizeof(char *) * (info->map_info.height + 1));
    if (copy_map == NULL)
        print_error(info, "Failed to allocate memory of copy map");
    i = 0;
    while (i < info->map_info.height)
    {
        copy_map[i] = (char *)malloc(sizeof(char) * (info->map_info.width + 1));
        if (copy_map[i] == NULL)
        {
            map_clear(copy_map);
            print_error(info, "Failed to allocate Memory of copy_map[i]");
        }
        ft_strlcpy(copy_map[i], info->map_info.map[i], info->map_info.width + 1);
        i++;
    }
    copy_map[i] = NULL;
    return (copy_map);
}