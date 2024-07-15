/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 22:26:48 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 20:57:53 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_len;

	i = 0;
	if (dst == NULL && !dstsize)
		return (ft_strlen(src));
	while (dst[i])
		i++;
	dst_len = i;
	if (dst_len >= dstsize)
		return (ft_strlen(src) + dstsize);
	j = 0;
	while (j < dstsize - dst_len - 1 && src[j])
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}

// int main()
// {
//     char *dest = NULL;
//     char src[] = "riku";
//     size_t x = 3;
//     size_t result;
//     // result = ft_strlcat(dest, src, x); // strlcat を ft_strlcat に修正する
//     // printf("%s: %zu\n", dest, result);
//     result = strlcat(dest, src, x);
//     printf("%s: %zu\n", dest, result);
//     return 0;
// }
