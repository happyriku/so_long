/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:10:17 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:31:48 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	num;

// 	num = isprint(33);
// 	printf("ft_isprint = %d\n", num);
// 	num = isprint(126);
// 	printf("ft_isprint = %d\n", num);
// 	num = isalnum(127);
// 	printf("ft_isprint = %d\n", num);
//     printf("\n");
// 	num = ft_isprint(33);
// 	printf("ft_isalnum = %d\n", num);
// 	num = ft_isprint(126);
// 	printf("ft_isalnum = %d\n", num);
// 	num = ft_isprint(127);
// 	printf("ft_isprint = %d\n", num);
// 	return (0);
// }
