/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:38:26 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:38:03 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief  The strdup() function returns a pointer to a new string which is a 
 * duplicate of the string s.  Memory for the new string is obtained with
 * malloc(3), and can be freed with free(3).
 * 
 * @param s 
 * @return char*  The strdup() function returns a pointer to a new string which 
 * is a duplicate of the string s.  Memory for the new string is obtained with 
 * malloc(3), and can be freed with free(3).
 */
char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	size;

	size = ft_strlen(s) + 1;
	new_s = malloc(size);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s, size);
	return (new_s);
}
