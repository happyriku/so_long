/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 02:36:42 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:35:59 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (str1[i] == str2[i]))
	{
		if (i == n - 1 || str1[i] == '\0')
			return (0);
		i++;
	}
	return (str1[i] - str2[i]);
}

//  int main(void)
//  {
//      char s1[] = "";
//      char s2[] = "";
//      //s2[2] = -1;
//      int num;

//      num = strncmp(s1, s2, 2);
//      printf("%d\n", num);
//      num = ft_strncmp(s1, s2, 2);
//      printf("%d\n", num);
//      return (0);
//  }
