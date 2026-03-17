/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:11:37 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:46:50 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The  memcpy()  function copies n bytes from memory area src to memory 
 * area dest.  The memory areas must not overlap. 
 * The memcpy() function returns a pointer to dest.
 * 
 * @param dest 
 * @param src 
 * @param n 
 * @return void* 
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*char_dest;
	const unsigned char	*char_src;

	if (dest == src)
		return (dest);
	char_dest = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i++;
	}
	return (dest);
}
