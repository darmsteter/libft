/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:03:37 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 18:06:37 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the last node of the list.
 * 
 * @param lst The beginning of the list.
 * @return t_list* Last node of the list
 */
t_list *ft_lstlast(t_list *lst)
{
	t_list *next_node;

	next_node = lst->next;
	while (1)
	{
		if (next_node->next)
			next_node = next_node->next;
		else
			return (next_node);
	}
}