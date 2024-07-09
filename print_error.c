#include "so_long.h"

void    print_error(t_info *info, char *error_message)
{
    (void)info;
    ft_printf("%s\n", error_message);
    exit(1);
}