/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:45:29 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 15:22:31 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	int					flag;
	unsigned char		c1;

	str = (unsigned char *)s;
	c1 = (unsigned char )c;
	flag = 0;
	i = 0;
	while (i < n)
	{
		if (str[i] == c1)
		{
			flag = 1;
			break ;
		}
		i++;
	}
	if (flag == 0)
		return (NULL);
	else
		return ((char *)(str + i));
}

// int main(void)
// {
//     char tab[] = "Rikuishibashi";
//     printf("%s\n", (char *)ft_memchr(tab, 97, 13));
//     printf("%s", (char *)memchr(tab, 97, 13));
//     return (0);
// }
