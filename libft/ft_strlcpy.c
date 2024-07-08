/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:19:42 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:35:11 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// int main(void)
// {
//     char dst[] = "AAAAAAAAAA";
//     char src[] = "coucou";
//     int num;

//     num = strlcpy(dst, src, 0);
//     printf("dst : %s\n", dst);
//     printf("%d\n", num);
//     num = ft_strlcpy(dst, src, 0);
// 	printf("dst : %s\n", dst);
//     printf("%d\n", num);
//     return (0);
// }
