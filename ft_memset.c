/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 18:06:16 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/12 13:03:48 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*init_s;

	i = 0;
	init_s = (unsigned char *)s;
	while (i < n)
	{
		init_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
