/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:22:26 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:38:32 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	iscontain(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if ((unsigned char)c == set[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * Allocates memory (using malloc(3)) and returns acopy of ’s1’ with 
 * characters from ’set’ removed from the beginning and the end.
 * @param s1 	The string to be trimmed.
 * @param set   The string containing the set of characters 
 * 				to be removed.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_s;
	size_t	end_s;
	char	*trimmed_s1;

	start_s = 0;
	while (s1[start_s] && iscontain(s1[start_s], set))
		start_s++;
	end_s = ft_strlen(s1) - 1;
	while ((end_s > start_s) && iscontain(s1[end_s], set))
		end_s--;
	trimmed_s1 = malloc(end_s - start_s + 2);
	if (!trimmed_s1)
		return (NULL);
	ft_strlcpy(trimmed_s1, &s1[start_s], end_s - start_s + 2);
	return (trimmed_s1);
}
