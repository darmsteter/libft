/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:47:14 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 18:32:09 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The calloc() function allocates memory for an array of nmemb 
 * elements of size  byteseach  and returns a pointer to the allocated 
 * memory.  The memory is set to zero.  If nmemb or size is 0, then 
 * calloc() returns a  unique  pointer  value that can later be 
 * successfully passed to free().  If the multiplication of nmemb and 
 * size would result in integer overflow, then calloc() returns an error.  
 * By contrast, an  integer  overflow would not be detected in the following 
 * call to malloc(), with the result that an incorrectly sized block of 
 * memory would be allocated: malloc(nmemb * size);
 * @param nmemb 
 * @param size 
 * @return void* 
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocated_memory;
	size_t	total_size;

	total_size = size * nmemb;
	allocated_memory = malloc(total_size);
	if (!allocated_memory)
		return (NULL);
	if (total_size > 0)
		ft_bzero(allocated_memory, nmemb);
	return (allocated_memory);
}
