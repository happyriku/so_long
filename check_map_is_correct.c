#include "so_long.h"

void	check_map_is_rectangle(t_info *info, t_list *lst)
{
	int	i;

	i = 0;
	while (ft_strlen(lst->content) == info->map_info.width)
	{
		if (lst->next == NULL)
		{
			return ;
		}
		lst = lst->next;
		i++;
	}
	ft_lstclear(&lst, free);
	print_error(info, "Map is not rectangle");
}

void	check_map_is_surrounded_by_walls(char	**map, t_info *info)
{
	int	row;
	int	col;

	row = 0;
	while (map[row] != '\0')
	{
		col = 0;
		while (map[row][col] != '\0')
		{
			if (row == 0 || col == 0 || row == (info->map_info.height - 1)
				|| col == info->map_info.width - 1)
			{
				if (map[row][col] != '1')
					print_error(info, "No walls in the map");
			}
			col++;
		}
		ft_printf("\n");
		row++;
	}
}

void	map_character_count(char **map, t_info *info)
{
	int row;
	int col;

	row = 0;
	while (map[row])
	{
		col = 0;
		while (map[row][col])
		{
			if (map[row][col] == '0')
				info->map_info.tile += 1;
			else if (map[row][col] == '1')
				info->map_info.wall += 1;
			else if (map[row][col] == 'C')
				info->map_info.item += 1;
			else if (map[row][col] == 'E')
				info->map_info.exit += 1;
			else if (map[row][col] == 'P')
				info->map_info.player += 1;
			col++;
		}
		row++;
	}
}

void	check_map_in_map(t_map map)
{
	if (info->map_info.item == 0)
		print_error(info, "No item in the map");
	if (info->map_info.exit == 0)
		print_error(info, "No exit in the map");
	if (info->map_info.player == 0)
		print_error(info, "No player in the map");
	if (info->map_info.player > 1)
		print_error(info, "Multiple players on the map");
	if (info->map_info.exit > 1)
		print_error(info, "Multiple exits on the map");
}

void	check_map_is_correct(t_info *info, t_list *lst)
{
	char **copy_map;

	check_map_is_rectangle(info, lst);
	ft_lstdelone(&lst, free);
	check_map_is_surrounded_by_walls(info->map_info.map, info);
	map_character_count(info->map_info.map, info);
	check_count_in_map(info);
	copy_map = create_map_copy(info);
	check_map_can_finish(info, info->map_info.map);
	map_clear(copy_map);
}