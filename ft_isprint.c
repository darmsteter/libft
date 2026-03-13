/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:34:52 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:43:58 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief checks for any printable character including space.
 * 
 * @param c 
 * @return int 
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
