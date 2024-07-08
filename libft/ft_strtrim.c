/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:41:58 by rishibas          #+#    #+#             */
/*   Updated: 2024/06/03 14:16:19 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		head;
	int		back;
	char	*str;

	i = -1;
	head = 0;
	back = ft_strlen(s1);
	while (ft_strchr(set, s1[head]) != NULL && s1[head])
		head++;
	if (head == back)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[back - 1]) != NULL)
		back--;
	str = malloc((back - head + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (++i < back - head)
		str[i] = s1[head + i];
	str[i] = '\0';
	return (str);
}

int main(void)
{
		char    const s1[] = "TokyoDenkiUniversity";
		char    const set[] =  "o";
		// char    const s1[] = "";
		// char    const set[] =  "";
		printf("before : %s, after : %s\n", s1, ft_strtrim(s1, set));
		return (0);
}
