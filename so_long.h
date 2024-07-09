/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:09:34 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/08 20:25:22 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <string.h>
# include <stdlib.h>
# include <fcntl.h>

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct s_player
{
	int item_count;
	int move_count;
	int	x;
	int	y;

} t_player;

typedef struct s_map
{
	char		**map;
	size_t		height;
	size_t		width;
	int			item;
	int			exit;
	int			player;
	int			wall;
	int			tile;

} t_map;

typedef struct s_info
{
    t_player    player_info;
    t_map       map_info;

} t_info;
 
typedef enum s_type
{
    TYPE_SUCESS = 1,
    TYPE_EOF    = 0,
    TYPE_FAILED = -1,
} t_type;

# if BUFFER_SIZE > 2147483646
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

void    check_map_name(char *map_name);
void    create_map(t_info *info, char *map_name);
char	*get_next_line(int fd, t_info *info);
void    map_clear(char **map);
void    print_error(t_info *info);
void	check_map_is_correct(t_info *info, t_list *lst);

#endif