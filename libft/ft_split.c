/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 20:49:30 by rishibas          #+#    #+#             */
/*   Updated: 2024/06/03 14:26:10 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int	i;
	int	flag;
	int	count;

	i = 0;
	flag = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (flag == 0)
		{
			count++;
			flag = 1;
		}
		i++;
	}
	return (count);
}

static char	*insert_to_array(char const *s, char c)
{
	int		i;
	char	*str;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	i = -1;
	while (s[++i] != c && s[i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}

static void	ft_free(char **str, int j)
{
	while (j-- > 0)
	{
		if (str[j] != NULL)
			free(str[j]);
	}
	free(str);
}

static char	**ft_split_help(char *s, char c, char **str, size_t words_num)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (j < words_num && s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			str[j] = insert_to_array(&s[i], c);
		if (str[j] == NULL)
		{
			ft_free(str, j);
			return (NULL);
		}
		j++;
		while (s[i] != c && s[i])
			i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		words_num;

	words_num = count_words(s, c);
	str = (char **)malloc((words_num + 1) * sizeof(char *));
	if (str == NULL)
		return (NULL);
	return (ft_split_help((char *)s, c, str, words_num));
}

int main(void)
{
    char a[] = "hello,world,42";
    int    i = 0;
    char **strs = ft_split(a, ',');
    while (strs[i])
    {
        printf("%s\n", strs[i]);
        i++;
    }
}
