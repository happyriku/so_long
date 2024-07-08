/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 03:18:00 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:35:20 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// int main(void)
// {
//     int num;

//     num = strlen("hdfgh");
//     printf("%d\n", num);
//     num = strlen("");
//     printf("%d\n", num);
//     num = strlen("'\0'");
//     printf("%d\n", num);
//     printf("\n");
//     num = ft_strlen("hdfgh");
//     printf("%d\n", num);
//     num = strlen("");
//     printf("%d\n", num);
//     num = strlen("'\0'");
//     printf("%d\n", num);
//     return (0);
// }
