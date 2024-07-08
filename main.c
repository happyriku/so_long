/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:09:44 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/08 21:29:49 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
    t_info info;

    if (argc <= 1)
        return(1);
    check_map_name(argv[1]);
    info = (t_info){0}; // t_info型のメンバを全て初期化
    create_map(&info, argv[1]);
    return (0);
}