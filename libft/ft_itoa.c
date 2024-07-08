/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 18:41:51 by rishibas          #+#    #+#             */
/*   Updated: 2024/05/13 19:12:07 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_n(int64_t num)
{
	int	i;

	i = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static void	to_array(int64_t num, int digits, int minus, char *str)
{
	int	re;
	int	buf;

	buf = digits;
	if (minus == -1)
		str[0] = '-';
	else if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		re = num % 10;
		*(str + digits - 1) = re + '0';
		num /= 10;
		digits--;
	}
	str[buf] = '\0';
}

char	*ft_itoa(int n)
{
	int		digit;
	int		minus;
	char	*str;
	int64_t	num;

	num = n;
	minus = 1;
	if (num < 0)
	{
		minus *= -1;
		num *= -1;
	}
	digit = ft_count_n(num);
	if (minus == -1)
		digit += 1;
	str = malloc((digit + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	to_array(num, digit, minus, str);
	return (str);
}

// int main(void)
// {
//     //printf("itoa : %s\n", ft_itoa(-2147483648));
//     printf("itoa : %s\n", ft_itoa(-21));
//     return (0);
// }
