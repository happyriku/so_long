/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:58:58 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 20:59:06 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != '\0')
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list node3 = {30, NULL}; //構造体のメンバのcontentをint型に変えれば出力結果を確かめられますよ！
// 	t_list node2 = {20, &node3};
// 	t_list node1 = {10, &node2};

// 	t_list *last_node = ft_lstlast(&node1);
// 	if (last_node)
// 		printf("Last node content : %d\n", last_node->content);
// 	else
// 		printf("List is empty");
// 	return (0);
// }