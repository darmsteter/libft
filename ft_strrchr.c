/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:45:45 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:38:29 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strrchr() function returns a pointer to the last occurrence 
 * of the character c in the string s.
 * 
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (1)
	{
		if (s[len] == (unsigned char)c)
			return ((char *)&s[len]);
		if (len == 0)
			break ;
		len--;
	}
	return (NULL);
}
