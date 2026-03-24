/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 18:23:55 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/18 18:27:29 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief The strlcat() function copy and concatenate strings respectively.  
 * strlcat() take the full size of the buffer (not just the length) and 
 * guarantee to NUL-terminate the result (as long as size is larger than 0.
 * Note that a byte for the NUL should be included in size.  Also note that 
 * strlcat() only operate on true “C” strings.  
 * This means that strlcat() both src and dst must be NUL-terminated.
 *      * if dest > size -> return (size + src_len)
 *      * if dest + src < size -> return (src_len + dest_len) < size
 *      * if dest + src > size -> return (src_len + dest_len) > size
 * 
 * The strlcat() function appends the NUL-terminated string src to the end 
 * of dst.  It will append at most size - strlen(dst) - 1 bytes, 
 * NUL-terminating the result.
 * 
 * @param dst 
 * @param src 
 * @param size 
 * @return size_t 
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  j;
    size_t  dst_len;
    size_t  src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (dst_len >= size)
        return (size + src_len);
    i = dst_len;
    j = 0;
    while ((i < size - 1) && src[j]) {
        dst[i] = src[j];
        j++;
        i++;
     }
    dst[i] = '\0';
    return (src_len + dst_len);
}
