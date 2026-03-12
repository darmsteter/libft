/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:04:44 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/12 16:11:05 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*char_s;

	i = 0;
	char_s = (unsigned char *)s;
	while (i < n)
	{
		char_s[i] = '\0';
		i++;
	}
}
