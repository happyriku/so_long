#include "so_long.h"

void    map_clear(char **map)
{
    int i;

    i = 0;
    while (map[i])
    {
        free(map[i]);
        i++;
    }
    ft_printf("%p\n", &map);
    free(map);
}
