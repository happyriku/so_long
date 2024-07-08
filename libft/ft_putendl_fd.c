/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 21:00:55 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/10 15:44:51 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = -1;
	while (++i < ft_strlen(s))
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
//     ft_putendl_fd("hello", 1);
//     write(1, "\n", 1);
//     //ft_putstr_fd("ABC", -1);
//     //write(1, "\n", 1);
//     return (0);
// }
