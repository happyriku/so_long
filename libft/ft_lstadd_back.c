/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 21:00:49 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/12 21:00:51 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_list;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	new_list = *lst;
	while (new_list->next)
	{
		new_list = new_list->next;
	}
	new_list->next = new;
}

// void print_list(t_list *lst)
// {
//     while (lst)
//     {
//         printf("%s -> ", (char *)lst->content);
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }

// int main(void)
// {
//     t_list *list = NULL;
//     t_list *new_node1 = ft_lstnew("Hello");
//     t_list *new_node2 = ft_lstnew("World");
//     t_list *new_node3 = ft_lstnew("!");

//     ft_lstadd_back(&list, new_node1);
//     ft_lstadd_back(&list, new_node2);
//     ft_lstadd_back(&list, new_node3);

//     print_list(list);

//     // Free the allocated memory
//     t_list *temp;
//     while (list)
//     {
//         temp = list;
//         list = list->next;
//         free(temp);
//     }

//     return 0;
// }