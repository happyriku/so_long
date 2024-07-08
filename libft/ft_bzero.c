/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:02:14 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 14:29:52 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char str[] = "Rikuishibashi";
//     // char str1[] = "Rikuishibashi";

//     bzero(str, 3);
//     for(int i = 0; i < 13; i++)
//         printf("%c", str[i]);
//     printf("\n");
//     ft_bzero(str, 3);
//       for(int i = 0; i < 3; i++)
//         printf("%c\n", str[i]);
//     return (0);
// }
