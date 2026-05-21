/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:02:12 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:38:23 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strncmp() function compares only the first (at most) n bytes 
 * of s1 and s2. The comparison is done using unsigned characters. strcmp() 
 * returns an integer indicating the result of the comparison, as follows:
 * 		• 0, if the s1 and s2 are equal;
 * 		• a negative value if s1 is less than s2;
 * 		• a positive value if s1 is greater than s2.
 * 
 * @param s1 
 * @param s2 
 * @param n 
 * @return int 
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		if (s1[i] == '\0')
			break ;
		i++;
	}
	return (0);
}
