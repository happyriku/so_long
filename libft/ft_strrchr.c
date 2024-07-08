/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:23:34 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:38:01 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		c1;
	int			end;

	c1 = (char)c;
	end = ft_strlen(s);
	while (end >= 0)
	{
		if (s[end] == c1)
			return ((char *)(&s[end]));
		end--;
	}
	if (end < 0)
		return (NULL);
	if (c1 == 0)
		return ((char *)(s));
	else
		return ((char *)(s));
}

// int main(void)
// {
// 	char	*p;
// 	const char 	*s = "libft-test-tokyo";

// 	p = strrchr(s, 'z');
// 	printf("%s\n", p);
// 	p = ft_strrchr(s, 'z');
// 	printf("%s\n", p);
// 	return (0);
// }
