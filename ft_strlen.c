/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:35:24 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:50:37 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strlen() function calculates the length of the string pointed 
 * to by s, excluding the terminating null byte ('\0'). The strlen() function 
 * returns the number of bytes in the string pointed to by s
 * 
 * @param s 
 * @return size_t 
 */
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
