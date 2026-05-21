/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:06:16 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:37:32 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The memset() function fills the first n bytes of the memory area 
 * pointed to by s with the constant byte c.
 * The memset() function returns a pointer to the memory area s.
 * @param s 
 * @param c 
 * @param n 
 * @return void* 
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*init_s;

	i = 0;
	init_s = (unsigned char *)s;
	while (i < n)
	{
		init_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
