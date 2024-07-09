#include "so_long.h"

void	go_up(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	go_left(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	go_right(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}

void	go_down(char *current_position, char *next_position, t_info *info)
{
	if (*next_position == '1')
		return ;
	else if (*next_position == '0')
		swap_position(info, current_position, next_position);
	else if (*next_position == 'C')
	{
		info->player_info.item_count += 1;
		*next_position = '0';
		swap_position(info, current_position, next_position);
	}
	else if (*next_position == 'E')
		check_player_can_goal(info);
}