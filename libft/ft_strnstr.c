/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 03:42:51 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/13 19:13:28 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_error(const char *haystack, size_t len)
{
	if (len == 0 && haystack == NULL)
		return (1);
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	int		k;

	i = 0;
	if (*needle == '\0')
		return ((char *)(haystack));
	while (handle_error(haystack, len) == 0 && (haystack[i] && i < len))
	{
		j = 0;
		k = -1;
		if (haystack[i] == needle[j])
		{
			j = i;
			while (haystack[j] == needle[++k] && j < len)
			{
				if (needle[k + 1] == '\0')
					return ((char *)(haystack + i));
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
//     //char haystack[30] = "aaabcabcd";
// 	//char needle[10] = "aabc";
//     char *ptr;

//     ptr = strnstr(NULL, "1", 0);
//     printf("%s\n", ptr);
// 	 ptr = ft_strnstr(NULL, "1", 0);
//     printf("%s\n", ptr);
//     // ptr = strnstr(NULL, needle, 0);
//     // printf("%s\n", ptr);
//     // ptr = ft_strnstr(haystack, "abcd", 9);
//     // printf("%s\n", ptr);
//     // ptr = strnstr(haystack, "abcd", 9);
//     // printf("%s\n", ptr);
//     return (0);
// }
