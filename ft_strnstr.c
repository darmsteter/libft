/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:36:48 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:53:05 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strnstr() function locates the first occurrence of the 
 * null-terminated string little in the string big, where not more than len
 * characters are searched.  Characters that appear after a ‘\0’ character 
 * are not searched.  Since the strnstr() function is a FreeBSD specific 
 * API, it should only be used when portability is not a concern.
 * 
 * @param big 
 * @param little 
 * @param len 
 * @return char* 
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!little[i])
		return ((char *)&big[i]);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (little[j] && (i + j) < len)
			{
				if (big[i + j] != little[j])
					break ;
				j++;
			}
			if (!little[j])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
