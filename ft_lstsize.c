/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:57:10 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 18:02:05 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the number of nodes in the list.
 * 
 * @param lst  The beginning of the list.
 * @return int The length of the list
 */
int ft_lstsize(t_list *lst)
{
	int	size;
	t_list *temp;

	size = 0;
	temp = lst->next;
	while (temp != NULL)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}