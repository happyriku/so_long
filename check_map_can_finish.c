#include "so_long.h"

void    get_player_position(t_info *info, char **map)
{
    int row;
    int col;

    row = 0;
    while (map[row])
    {
        col = 0;
        while (map[row][col])
        {
            if (map[row][col] == 'P')
            {
                info->player_info.x = col;
                info->player_info.y = row;
                return ;
            }
            col++;
        }
        row++;
    }
}

void    explore_outside_exit_and_replace_with_X(char **map, int y, int x)
{
    map[y][x] = 'X';
    if (map[y][x + 1] == '0' || map[y][x + 1] == 'C')
        explore_outside_exit_and_replace_with_X(map, y, x + 1);
    if (map[y][x - 1] == '0' || map[y][x - 1] == 'C')
        explore_outside_exit_and_replace_with_X(map, y, x - 1);
    if (map[y + 1][x] == '0' || map[y + 1][x] == 'C')
        explore_outside_exit_and_replace_with_X(map, y + 1, x);
    if (map[y - 1][x] == '0' || map[y - 1][x] == 'C')
        explore_outside_exit_and_replace_with_X(map, y - 1, x);
}

void    check_item_in_map(char **map, t_info *info)
{
    int row;
    int col;

    row = 0;
    while (map[row])
    {
        col = 0;
        while (map[row][col])
        {
            if (map[row][col] == 'C')
            {
                map_clear(map);
                print_error(info, "You can't take all the items in a map");
            }
            col++;
        }
        row++;
    }
}

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

void    check_exit_in_map(char **map, t_info *info)
{
    int row;
    int col;

    row = 0;
    while (map[row])
    {
        col = 0;
        while (map[row][col])
        {
            if (map[row][col] == 'E')
            {
                map_clear(map);
                print_error(info, "You can't go to exit !");
            }
            col++;
        }
        row++;
    }
}

void    check_map_can_finish(t_info *info, char **map)
{
    get_player_position(info, map);
    explore_outside_exit_and_replace_with_X(map, info->player_info.y, info->player_info.x);
    check_item_in_map(map, info);
    explore_map_and_replayce_with_Y(map, info->player_info.y, info->player_info.x);
    check_exit_in_map(map, info);
}