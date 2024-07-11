#include "libft.h"

void    ft_lstdelone(t_list *lst, void(*del)(void *))
{
    t_list *tmp;

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