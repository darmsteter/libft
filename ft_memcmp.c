/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:29:09 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 11:40:47 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/**
 * @brief  The memcmp() function compares the first n bytes (each interpreted 
 * as unsigned char) of the memory areas s1 and s2. 
 * The  memcmp()  function returns an integer less than, equal to, or greater 
 * than zero if the first n bytes of s1 is found, respectively, to be less than, 
 * to match, or be greater than the first n bytes of s2. For a nonzero return 
 * value, the sign is determined by the sign of the difference between the first 
 * pair of bytes  (inter‐preted as unsigned char) that differ in s1 and s2.
 * If n is zero, the return value is zero.
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*char_s1;
	const unsigned char	*char_s2;

	i = 0;
	char_s1 = (const unsigned char *)s1;
	char_s2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (char_s1[i] != char_s2[i])
			return (char_s1[i] - char_s2[i]);
		i++;
	}
	return (0);
}
