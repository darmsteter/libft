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

	size_arr = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			size_arr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (size_arr);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i = 0;

	word = malloc(end - start + 1);
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
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
	char	**arr;
	size_t	i = 0, j = 0;
	size_t	start;

	if (!s)
		return (NULL);

	arr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!arr)
		return (NULL);

	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;

		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			arr[j] = word_dup(s, start, i);
			if (!arr[j])
			{
				while (j > 0)
					free(arr[--j]);
				free(arr);
				return (NULL);
			}
			j++;
		}
	}
	arr[j] = NULL;
	return (arr);
}
