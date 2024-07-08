#include "so_long.h"

int main(int argc, char **argv)
{
    t_info info;

    if (argc <= 1)
        return(1);
    check_map_name(argv[1]);
    info = (t_info){0}; // t_info型のメンバを全て初期化
    check_is_map_correct(info);


    return (0);
}