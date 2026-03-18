/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:52:35 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 13:34:28 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_arr_size(char const *s, char c)
{
	size_t	size_arr;
	size_t	i;
	int		was_added;

	i = 0;
	was_added = 0;
	size_arr = 1;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			size_arr++;
			was_added = 1;
		}
		i++;
	}
	if (was_added)
		size_arr++;
	return (size_arr);
}

static	size_t	find_substr_len(const char *s, char c, size_t i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		len++;
	}
	return (len);
}

/**
 * @brief Allocates memory (using malloc(3)) and returns an array of strings 
 * obtained by splitting ’s’ using the character ’c’ as a delimiter. 
 * Each string in the returned array is allocated independently. The array 
 * of pointers itself is also allocated dynamically. The returned array 
 * must be NULL terminated.
 * 
 * @param s The string to be split
 * @param c The delimiter character.
 * @return * char** The array of new strings resulting from the split. 
 * NULL if any allocation fails.The returned structure will be released 
 * using: 1)free() on each string in the array; 2) free() thearray itself.
 */
char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	size_str;
	char	**array_of_str;

	array_of_str = malloc(sizeof(char *) * find_arr_size(s, c));
	if (!array_of_str)
		return (NULL);
	j = 0;
	while (s[i])
	{
		size_str = find_substr_len(s, c, i);
		if (size_str > 0)
		{
			array_of_str[j] = ft_substr(s, i, size_str);
			i += size_str;
			j++;
		}
		else
		{
			array_of_str[j] = NULL;
			break ;
		}
	}
	return (array_of_str);
}
