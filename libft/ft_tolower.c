/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 01:41:24 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:37:39 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

// int main(void)
// {
//     int num;

//     num = tolower('Z' + 1);
//     printf("%c : %d\n", num, num);
//     num = ft_tolower('Z' + 1);
//     printf("%c : %d\n", num, num);
//     return (0);
// }
