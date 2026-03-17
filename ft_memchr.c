/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:32:02 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:44:52 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The  memchr()  function scans the initial n bytes of the memory area 
 * pointed to by s for the first instance of c.  Both c and the bytes of the 
 * memory area pointed to by s are interpreted as unsigned char.
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*char_s;

	i = 0;
	char_s = (const unsigned char *)s;
	while (i < n)
	{
		if (char_s[i] == (unsigned char)c)
			return ((void *)&char_s[i]);
		i++;
	}
	return (NULL);
}
