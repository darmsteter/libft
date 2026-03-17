/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:22:26 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/17 19:02:34 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory (using malloc(3)) and returns acopy of ’s1’ with 
 * characters from ’set’ removed from the beginning and the end.
 * @param s1 	The string to be trimmed.
 * @param set   The string containing the set of characters 
 * 				to be removed.
 */

static int	iscontain(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t	find_len(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s1);
	i = 0;
	while (1)
	{
		if (iscontain(s1[len], set))
			len--;
		else
			break ;
	}
	while (1)
	{
		if (iscontain(s1[i], set))
		{
			len--;
			i++;
		}
		else
			break ;
	}
	return (len);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;

	size = find_len(s1, set);

}
