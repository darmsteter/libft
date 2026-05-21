/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 17:25:55 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/25 17:37:43 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief Outputs the integer ’n’ to the specified file descriptor.
 * 
 * @param n  The integer to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_fd(int n, int fd)
{
	long	num_l;
	char	c;

	if (fd < 0)
		return ;
	num_l = n;
	if (num_l < 0)
	{
		num_l *= -1L;
		write(fd, "-", 1);
	}
	if (num_l > 9)
		ft_putnbr_fd((int)(num_l / 10), fd);
	c = (num_l % 10) + '0';
	write(fd, &c, 1);
}
