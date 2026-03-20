/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:16:58 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/20 17:41:42 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Deletes and frees the given node and all its successors, using 
 * the function ’del’ and free(3). Finally, set the pointer to the list 
 * to NULL.
 * 
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete the content 
 * of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp_node;

	if (!del && !*lst && !lst)
		return ;
	while (lst && *lst)
	{
		tmp_node = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_node;
	}
}
