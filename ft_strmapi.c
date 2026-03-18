/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 16:21:19 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 16:43:31 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function f to each character of the string s, passing 
 * its index as the first argument and the character itself as the second. 
 * A new string is created (using malloc(3)) to store the results from the 
 * successive applications of f.
 * 
 * @param s The string to iterate over.
 * @param f The function to apply to each character.
 * @return char* The string created from the successive applications of ’f’.
 * Returns NULL if the allocation fails.
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t i;
	size_t	len;
	char	*new_s;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	new_s = malloc(len);
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
