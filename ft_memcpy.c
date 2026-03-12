/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:11:37 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/12 16:31:34 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*char_dest;
	const unsigned char	*char_src;

	char_dest = (unsigned char *)dest;
	char_src = (const unsigned char *)src;
	while (n > 0)
	{
		char_dest[n] = char_src[n];
		n++;
	}
	return (dest);
}
