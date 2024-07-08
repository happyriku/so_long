/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 20:07:30 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/25 14:52:24 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	int		*ptr;

	if (size > 0 && count > 0)
		if (count > SIZE_MAX / size)
			return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == '\0')
		return (0);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int main(void)
// {
//     // int *p1;
//     int *p2;
//     size_t num;

//     num = SIZE_MAX / 10 + 1;
//     p1 = calloc(num, 10);
//     for(size_t i = 0; i < num; i++)
//         printf("p1[%lu] = %d\n", i + 1, p1[i]);
//     free(p1);
//     printf("\n");
//     p2 = ft_calloc(num, 10);
//     for(size_t i = 0; i < num; i++)
//         printf("p2[%lu] = %d\n", i + 1, p2[i]);
//     free(p2);
// }
