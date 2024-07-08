/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:10:56 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:32:23 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void	*src, size_t n)
{
	size_t	i;
	char	*dest;
	char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}

// int main(void)
// {
//     char *src;
//     char *dest;

// 	src = NULL;
// 	dest = NULL;
//     memcpy(dest, src, 3);
//     printf("%s\n", dest);
//     printf("\n");
//     ft_memcpy(dest, src, 3);
//     printf("%s\n", dest);
//     return (0);
// }
