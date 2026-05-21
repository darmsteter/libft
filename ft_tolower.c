/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 16:12:55 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:38:38 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief If c is an uppercase letter, tolower() returns its lowercase 
 * equivalent, if a lowercase representation exists in the cur‐rent 
 * locale.  Otherwise, it returns c.
 * 
 * @param c 
 * @return int 
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
