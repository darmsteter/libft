/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:20:12 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/20 15:09:10 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Iterates through the list ’lst’, applies the function ’f’ to each
 *  node’s content, and creates a new list resulting of the successive 
 * applications of the function ’f’. The ’del’ function is used to delete the 
 * content of a node if needed.
 * 
 * @param lst The address of a pointer to a node.
 * @param f The address of the function applied to each node’s content.
 * @param del The address of the function used to delete a node’s content 
 * if needed.
 * @return t_list* The new list. NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *temp_lst;
    t_list  *new_lst;

    if (!lst || !f || !del)
        return (NULL);
    temp_lst = ft_lstnew(f(lst->content));
    if (!temp_lst)
        return (NULL);
    new_lst = temp_lst;
    lst = lst->next;
    while (lst)
    {
        temp_lst->next  = ft_lstnew(f(lst->content));
        if (!temp_lst->next)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        temp_lst = temp_lst->next;
        lst = lst->next;
    }
    temp_lst->next = NULL;
    return (new_lst);
}
