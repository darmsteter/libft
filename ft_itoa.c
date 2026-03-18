/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:35:35 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 16:49:41 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	find_number_len(int n)
{
	size_t	num_len;
	long	num_l;

	if (n == 0)
		return (1);
	num_len = 0;
	if (n < 0)
	{
		num_len++;
		num_l = n * (-1L);
	}
	else
		num_l = n;
	while (num_l > 0)
	{
		num_l /= 10;
		num_len++;
	}

	return (num_len);
}

static int ft_pow (int n, int pow)
{
	if (pow == 0)
		return (1);
	return (n * ft_pow(n, pow - 1));
}

static	void	fill_str(char *str_n, int n, size_t len)
{
	size_t	i;
	long	num_l;

	num_l = n;

	i = 0;
	if (num_l < 0)
	{
		num_l *= -1;
		str_n[0] = '-';
		i++;
		len--;
	}
	while (num_l > 10)
	{
		str_n[i] = num_l / ft_pow(10, len - 1) + '0';
		num_l = num_l % ft_pow(10, len - 1);
		len--;
		i++;
	}
	str_n[i] = num_l + '0';
}

/**
 * @brief Allocates memory (using malloc(3)) and returns a string representing 
 * the integer received as an argument. Negative numbers must be handled.
 * 
 * @param n  The integer to convert.
 * @return char* The string representing the integer. NULL if the allocation 
 * fails.
 */
char	*ft_itoa(int n)
{
	size_t	i;
	size_t	num_len;
	char	*str_n;

	num_len = find_number_len(n);
	str_n = malloc(num_len);
	if (!str_n)
		return (NULL);
	fill_str(str_n, n, num_len);
	return (str_n);
}
