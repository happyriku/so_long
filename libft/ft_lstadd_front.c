/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 21:01:00 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 21:01:18 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return (NULL);
	new->next = *lst;
	*lst = new;
}

// int	main(void)
// {
// 	t_list *head = NULL;
// 	t_list *new_node;

// 	// 新しいノードを作成します
// 	new_node = (t_list*)malloc(sizeof(t_list));
// 	if (new_node == NULL)
// 	{
// 		printf("メモリの割り当てに失敗しました\n");
// 		return (1);
// 	}
// 	new_node->content = "Hello, World!";
// 	new_node->next = NULL;

// 	// リストの先頭に新しいノードを追加します
// 	ft_lstadd_front(&head, new_node);

// 	// リストの内容を表示します
// 	while (head != NULL)
// 	{
// 		printf("%s\n", (char*)head->content);
// 		head = head->next;
// 	}

// 	return (0);
// }