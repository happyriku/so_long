#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	struct s_list *lst;

	lst = (struct s_list *)malloc(sizeof(struct s_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}

// int main(void)
// {
//     t_list *list;
//     int num = 42;

//     list = ft_lstnew(&num);
//     if (list == NULL)
//     {
//         printf("Failed to create new list.\n");
//         return (1);
//     }

//     printf("Content of the new list: %d\n", *(int *)(list->content));
//     free(list);
//     return (0);
// }