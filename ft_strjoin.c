/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:22:26 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 13:00:10 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory (using malloc(3)) and returns a new string, which 
 * is the result of concatenating ’s1’ and ’s2’.
 * 
 * @param s1  The prefix string.
 * @param s2 The suffix string.
 * @return char* The new string. NULL if the allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s2_len;
	char	*joined_s;
	size_t	i;

	if (s1 && s2)
	{
		s2_len = ft_strlen(s2);
		joined_s = malloc(ft_strlen(s1) + s2_len + 1);
		if (!joined_s)
			return (NULL);
		i = 0;
		while (s1[i])
		{
			joined_s[i] = s1[i];
			i++;
		}
		while (s2[s2_len - i])
		{
			joined_s[i] = s1[s2_len - i];
			i++;
		}
		joined_s[i] = '\0';
	}
	return (NULL);
}

