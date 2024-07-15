/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:59:25 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/14 15:10:26 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst == NULL)
		return ;
	tmp = lst;
	lst = lst->next;
	(*del)(tmp->content);
	free(tmp);
	ft_lstdelone(lst, free);
}

// void    ft_lstdelone(t_list *lst, void(*del)(void *))
// {
//     t_list *tmp;

//     tmp = lst;
//     lst = lst->next;
//     (*del)(tmp->content);
//     free(tmp);
// }