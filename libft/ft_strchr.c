/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:01:03 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:34:25 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c1;
	char	*s1;

	s1 = (char *)s;
	c1 = (char)c;
	while (*s1)
	{
		if (*s1 == c1)
			return (s1);
		s1++;
	}
	if (c1 == '\0')
		return (s1);
	return (NULL);
}

// int main(void)
// {
//     char *p;
//     char s[] = {0x01, 0x02, 0x03};

//     p = ft_strchr(s, '0x03');
//     printf("before :%s after : %s\n", s, p);
//      p = strchr(s, '0x03');
//     printf("before : %s after : %s\n",s, p);
//     return (0);
// }
