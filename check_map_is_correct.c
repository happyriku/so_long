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
	print_error(info);
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
					print_error(info);
			}
			col++;
		}
		ft_printf("\n");
		row++;
	}
}

void	check_map_is_correct(t_info *info, t_list *lst)
{
	check_map_is_rectangle(info, lst);
	check_map_is_surrounded_by_walls(info->map_info.map, info);
}