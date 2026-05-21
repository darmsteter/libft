/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:20:12 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:37:10 by skorenev         ###   ########.fr       */
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
	t_list	*new_list;
	t_list	*temp_noda;
	void	*content;

	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		temp_noda = ft_lstnew(content);
		if (!temp_noda)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, temp_noda);
		lst = lst->next;
	}
	return (new_list);
}
