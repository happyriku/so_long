/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 04:08:33 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 15:42:02 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	c1;

	c1 = (unsigned char)c;
	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = c1;
	return (b);
}

// int main(void)
// {
//     char buf[] = "ABCDEFGHIJKLMN";
//     memset(buf + 2, '1', 3);
//     printf("%s\n", buf);
//     ft_memset(buf + 2, '1', 3);
//     printf("%s\n", buf);
//     return (0);
// }
