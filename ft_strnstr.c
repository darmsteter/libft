/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:36:48 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/11 18:07:08 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
