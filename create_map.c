/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:09:54 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/08 21:30:49 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	get_map_lines(int fd, t_info *info, t_list **lst)
{
	char    *line;
	t_list  *new_node;
	int		i;

	line = get_next_line(fd, info);
	if (!line)
		return (TYPE_EOF);
	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	line[i] = '\0';
    new_node = ft_lstnew(line);
	if (!new_node)
		return (TYPE_FAILED);
	ft_lstadd_back(lst, new_node);
	return (TYPE_SUCESS);
}

void	make_list_from_map_lines(int fd, t_info *info, t_list **lst)
{
	int check;

	check = TYPE_SUCESS;
	while (check == TYPE_SUCESS)
	{
		check = get_map_lines(fd, info, lst);
		if (check == TYPE_EOF)
			return ;
		if (check == TYPE_FAILED)
		{
			ft_lstclear(lst, free);
			print_error(info, "Failed to create new node");
		}
	}
}
char	**create_map_from_list(t_info *info, t_list *lst)
{
	int		i;
	char	**map;

	map = (char **)malloc(sizeof(char *) * (info->map_info.height + 1));
	if (!map)
	{
		ft_lstclear(&lst, free);
		print_error(info, "Failed to allocate Memory of map");
	}
	i = 0;
	while (lst)
	{
		map[i] = (char *)malloc(sizeof(char) * (ft_strlen((lst)->content) + 1));
		if (!map[i])
		{
			ft_lstclear(&lst, free);
			map_clear(map);
			print_error(info,"Failed to allocate Memory of map[i]");
		}
		ft_strlcpy(map[i], lst->content, ft_strlen(lst->content) + 1);
		lst = lst->next;
		i++;
	}
	return (map);
}

void    create_map(t_info *info, char *map_name)
{
	int		fd;
	t_list	*lst = NULL;

	fd = open(map_name, O_RDONLY);
	if (fd == TYPE_FAILED)
	{
		ft_printf("open function is Error\n");
		return ;
	}
	make_list_from_map_lines(fd, info, &lst);
	info->map_info.height = ft_lstsize(lst);
	info->map_info.width = ft_strlen(lst->content);
	info->map_info.map = create_map_from_list(info, lst);
	check_map_is_correct(info, lst);
	close(fd);
}