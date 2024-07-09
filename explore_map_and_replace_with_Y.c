#include "so_long.h"

void    explore_map_and_replace_with_Y(char **map, int y, int x)
{
    map[y][x] = 'Y';
    if (map[y][x + 1] != '1' && map[y][x + 1] != 'Y')
        explore_map_and_replace_with_Y(map, y, x + 1);
    if (map[y][x - 1] != '1' && map[y][x - 1] != 'Y')
        explore_map_and_replace_with_Y(map, y, x - 1);
    if (map[y + 1][x] != '1' && map[y + 1][x] != 'Y')
        explore_map_and_replace_with_Y(map, y + 1, x);
    if (map[y - 1][x] != '1' && map[y + 1][x] != 'Y')
        explore_map_and_replace_with_Y(map, y - 1, x);
}
