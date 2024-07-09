#include "so_long.h"

void    swap_position(t_info *info, char *current_position, char *next_position)
{
    char *tmp;

    tmp = current_position;
    current_position = next_position;
    next_position = tmp;
    info->player_info.move_count += 1;
    ft_printf("player move count : %d\n", info->player_info.move_count);
}