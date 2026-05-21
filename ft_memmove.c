/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:47:44 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:37:27 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The  memmove()  function  copies n bytes from memory area src to 
 * memory area dest.  The memory areas may overlap: copying takes place as 
 * though the bytes in src are first copied into a temporary array that does 
 * not overlap src or dest, and the bytes are then copied from the temporary 
 * array to dest.
 * The memmove() function returns a pointer to dest.
 * @param dest 
 * @param src 
 * @param n 
 * @return void* returns a pointer to dest.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	char_dest = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	if (char_dest < char_src)
	{
		i = 0;
		while (i < n)
		{
			char_dest[i] = char_src[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			char_dest[n] = char_src[n];
	}
	return (dest);
}
