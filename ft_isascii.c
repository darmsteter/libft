/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:37:50 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:36:36 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief checks whether c is a 7-bit unsigned char value that fits into the 
 * ASCII character set.
 * 
 * @param c 
 * @return int 
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
