/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explore_map_and_replace_char.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:01:30 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/14 18:07:57 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	explore_map_and_replace_char(char **map, int y, int x)
{
	map[y][x] = 'Y';
	if (map[y][x + 1] != '1' && map[y][x + 1] != 'Y')
		explore_map_and_replace_char(map, y, x + 1);
	if (map[y][x - 1] != '1' && map[y][x - 1] != 'Y')
		explore_map_and_replace_char(map, y, x - 1);
	if (map[y + 1][x] != '1' && map[y + 1][x] != 'Y')
		explore_map_and_replace_char(map, y + 1, x);
	if (map[y - 1][x] != '1' && map[y + 1][x] != 'Y')
		explore_map_and_replace_char(map, y - 1, x);
}
