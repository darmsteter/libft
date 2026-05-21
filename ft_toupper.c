/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:06:51 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:38:41 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief If c is a lowercase letter, toupper() returns its uppercase 
 * equivalent, if an uppercase representation exists in the current 
 * locale.  Otherwise, it returns c.
 * 
 * @param c 
 * @return int 
 */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
