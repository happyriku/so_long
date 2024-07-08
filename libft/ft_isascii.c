/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 02:40:09 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:31:29 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// int main(void)
// {
//     int num;

//     num = isascii('1');
//     printf("%d\n", num);
//     num = isascii('a');
//     printf("%d\n", num);
//     num = isascii('{');
//     printf("%d\n", num);
//     num = isascii(128);
//     printf("%d\n", num);
//     num = isascii(0x4a);
//     printf("%d\n", num);
//     num = isascii(0177);
//     printf("%d\n", num);

//     printf("\n");
//     num = ft_isascii('1');
//     printf("%d\n", num);
//     num = ft_isascii('a');
//     printf("%d\n", num);
//     num = ft_isascii('{');
//     printf("%d\n", num);
//     num = ft_isascii(128);
//     printf("%d\n", num);
//     num = ft_isascii(0x4a);
//     printf("%d\n", num);
//     num = ft_isascii(0177);
//     printf("%d\n", num);
// }
