/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 14:18:27 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 12:42:38 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates memory (using malloc(3)) and returns a substring from the 
 * string ’s’. The substring starts at index ’start’ and has a maximum length 
 * of ’len’.
 * 
 * @param s The original string from which to create the substring.
 * @param start The starting index of the substring within ’s’.
 * @param len The maximum length of the substring.
 * @return char* 
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*substr;

	len_s = ft_strlen(s);
	if (start > len_s)
		return (NULL);
	substr = malloc(len);
	if (!substr)
		return (NULL);
	ft_strlcat(substr, &s[start], len);
	return (substr);
}
