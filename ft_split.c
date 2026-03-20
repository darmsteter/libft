/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 12:52:35 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/20 19:24:20 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(char const *s, char c)
{
	size_t	i;
	int		count;
	int		is_first_letter;
	
	i = 0;
	count = 0;
	is_first_letter = 1;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
			is_first_letter = 1;
		else if (s[i] != c && is_first_letter)
		{
			count++;
			is_first_letter = 0;
		}
		i++;
	}
	return (count);
}

int find_word_len(char const *s, char c)
{
	int	len;
	
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	*fill_word(char const *s, char c, char *word)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**free_arr(int j, char **splited_words)
{
	j--;
	while (j > 0)
	{
		free(splited_words[j]);
		j--;
	}
	free(splited_words);
	return (NULL);
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
	int		i;
	int		j;
	int		count;
	char	**splited_words;
	char	*word;
	
	i = 0;
	j = 0;
	count = count_words(s, c);
	splited_words = malloc((count + 1) * sizeof(char *));
	if (!splited_words)
		return (NULL);
	while (j < count)
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{	
			word = malloc(find_word_len(&s[i], c) + 1);
			if (!word)
				return (free_arr(j, splited_words));
			fill_word(&s[i], c, word);
			splited_words[j] = word;
			while (s[i] && s[i] != c)
				i++;
		}
		j++;
	}
	splited_words[j] = NULL;
	return (splited_words);
}
