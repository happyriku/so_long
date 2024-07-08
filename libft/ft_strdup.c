/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 11:19:58 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:34:34 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	int		size;
	int		i;

	i = -1;
	size = ft_strlen(s1) + 1;
	dest = (char *)malloc(size * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	if (dest == NULL)
		return (NULL);
	while (++i < size)
		dest[i] = s1[i];
	return (dest);
}

// int main(void)
// {
//     const char *s = NULL;
//     char *result1 = ft_strdup(s);
//     // char *result = strdup(s);
//     printf("ft_strdup result: \"%s\"\n", result1);
//     // printf("strdup result: \"%s\"\n", result);
//     free(result1);
//     // free(result);
//     printf("\n");
//     return 0;
// }
