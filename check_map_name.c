/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_name.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:10:02 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/15 18:33:34 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	check_map_name(char *map_name)
{
	while (*map_name)
	{
		if (*map_name == '.')
		{
			if (strncmp(map_name, ".ber\0", 5) == 0)
				return ;
		}
		map_name++;
	}
	ft_printf("map name is incorrect\n");
	exit(1);
}
