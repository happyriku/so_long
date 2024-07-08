#include "so_long.h"

int get_map_line(int fd, t_info *info)
{
    char    *line;
    t_list  *new_node;
    t_list  *lst;

    line = get_next_line(fd, info);
    if (!line)
        return (TYPE_EOF);
    new_node = ft_lstnew(line);
    if (!new_node)
        return (print_error(info));
    ft_lstadd_back(&lst, new_node);
    return (TYPE_SUCESS);

}

void    create_map(t_info *info, char *map_name)
{
    int fd;

    fd = open(map_name, O_RDONLY);
    if (fd == TYPE_FAILED)
        return (print_error(info));
    get_map_line(fd, info);
}