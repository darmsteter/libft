/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.codam.nl>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:20:42 by skorenev          #+#    #+#             */
/*   Updated: 2026/04/15 14:45:17 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strchr() function returns a pointer to the first occurrence 
 * of the character c in the string s.
 * The strchr() function return a pointer to the matched character
 * or NULL if the  character  is  not  found. The  terminating  null byte is 
 * considered part of the string, so that if c is specified as '\0', these 
 * functions return a pointer to the terminator.
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (1)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		if (!s[i])
			return (NULL);
		i++;
	}
}
