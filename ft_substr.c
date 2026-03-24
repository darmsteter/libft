/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:18:27 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/20 17:50:49 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory (using malloc(3)) and returns a substring from the 
 * string ’s’. The substring starts at index ’start’ and has a maximum length
 * of ’len’.
 *		* if start >= s_len -> return ""
 *
 * @param s The original string from which to create the substring.
 * @param start The starting index of the substring within ’s’.
 * @param len The maximum length of the substring.
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	copy_len;
	char	*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
	{
		substr = malloc(1);
		if (!substr)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (s_len - start < len)
		copy_len = s_len - start;
	else
		copy_len = len;
	substr = malloc(copy_len + 1);
	if (!substr)
		return (NULL);
	ft_strlcpy(substr, s + start, copy_len + 1);
	return (substr);
}
