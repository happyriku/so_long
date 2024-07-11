#include "so_long.h"

void    check_player_can_goal(t_info *info)
{
    if (info->player_info.item_count == info->map_info.item)
    {
        info_free(info);
        map_clear(info->map_info.map);
        ft_printf("Game clear !\n");
        exit(0); //free_infoもあとで追加しておく
    }
    else
        return ;
}