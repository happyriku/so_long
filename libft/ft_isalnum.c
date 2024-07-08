/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 01:48:44 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:31:05 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

// int	main(void)
// {
// 	int	num;

// 	num = isalnum('2');
// 	printf("isalnum = %d\n", num);
// 	num = isalnum('a');
// 	printf("isalnum = %d\n", num);
// 	num = ft_isalnum('{');
// 	printf("isalnum = %d\n", num);
// 	num = ft_isalnum('2');
// 	printf("ft_isalnum = %d\n", num);
// 	num = ft_isalnum('a');
// 	printf("ft_isalnum = %d\n", num);
// 	num = ft_isalnum('{');
// 	printf("isalnum = %d\n", num);
// 	return (0);
// }
