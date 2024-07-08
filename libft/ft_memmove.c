/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 20:50:28 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/13 19:12:27 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	memmove_help(char	*dest, char	*source, size_t len)
{
	size_t	i ;

	i = 0;
	if (dest >= source)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = source[i - 1];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*source;

	if (dst == NULL && src == NULL)
		return (NULL);
	dest = (char *)dst;
	source = (char *)src;
	memmove_help(dest, source, len);
	return (dest);
}

// int	main(void)
// {
// 	char	*dest = NULL;
// 	char	*src = NULL;
// 	char	*p;
// 	int i;

// 	p = memmove(dest, src, 3);
// 	for (i = 0; i < 13; i++)
// 		printf("%c", p[i]);
// 	printf("\n");
// 	p = ft_memmove(dest, src, 3);
// 	for (i = 0; i < 13; i++)
// 		printf("%c", p[i]);
// 	return (0);
//
