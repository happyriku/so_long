/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rishibas <rishibas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 20:58:43 by rishibas          #+#    #+#             */
/*   Updated: 2024/07/14 14:14:03 by rishibas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void	(*del)(void	*))
{
	t_list	*new_content;
	t_list	*new_list;
	t_list	*new_elem;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new_elem = NULL;
	while (lst)
	{
		new_content = (*f)(lst->content);
		if (new_list != NULL)
			new_elem = ft_lstnew(new_list);
		if (!new_list || !new_list)
		{
			(*del)(new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
	}
	return (new_list);
}
