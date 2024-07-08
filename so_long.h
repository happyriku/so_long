#ifndef SO_LONG_H
# define SO_LONG_H


#include <stdio.h> //If I submit this dir, delete this code.
#include <string.h>
#include <stdlib.h>

typedef struct s_player
{
    int item_count;
    int move_count;

} t_player;

typedef struct s_map
{
    char **map;
    int item_count;
    int exit_count;
    int player_count;
    int wall_count;
    int tile_count;

} t_map;

typedef struct s_info
{
    t_player    player_info;
    t_map       map_info;

} t_info;
 
typedef enum s_type
{
    TYPE_SUCESS = 0,
    TYPE_EOF    = 1,
    TYPE_FAILED = -1,
} t_type;


void    check_map_name(char *map_name);

#endif