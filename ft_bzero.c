/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:04:44 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:39:53 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The  bzero()  function  erases the data in the n bytes of the memory 
 * starting at the location pointed to by s, by writing zeros 
 * (bytes containing '\0') to that area.
 * 
 * @param s 
 * @param n 
 */
void	ft_bzero(void *s, size_t n)
{
	size_t				i;
	unsigned char	*char_s;

	i = 0;
	char_s = (unsigned char *)s;
	while (i < n)
	{
		char_s[i] = '\0';
		i++;
	}
}
