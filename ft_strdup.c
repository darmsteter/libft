/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 17:38:26 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/17 18:46:08 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_s;
	size_t	size;

	size = ft_strlen(s) + 1;
	new_s = malloc(size);
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s, size);
	return (new_s);
}
