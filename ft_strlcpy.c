/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:19:42 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:50:08 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strlcpy() function copies up to size - 1 characters from the 
 * NUL-terminated string src to dst, NUL-terminating the re‐sult.
 * 
 * @param dst 
 * @param src 
 * @param size 
 * @return size_t 
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;
	int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
