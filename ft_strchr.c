/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:20:42 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:49:11 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strchr() function returns a pointer to the first occurrence 
 * of the character c in the string s.
 * The strchr() and strrchr() functions return a pointer to the matched character
 * or NULL if the  character  is  not  found. The  terminating  null byte is 
 * considered part of the string, so that if c is specified as '\0', these 
 * functions return a pointer to the terminator.
 * @param s 
 * @param c 
 * @return char* 
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(s) + 1;
	while (i <= len)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
