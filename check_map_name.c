#include "so_long.h"


void    check_map_name(char *map_name)
{
    while (*map_name)
    {
        if (*map_name == '.')
        {
            if(strncmp(map_name, ".ber\0", 5) == 0)
                return ;
            else
            {
                printf("error\n");
                return ;
            }
        }
        map_name++;
    }
}