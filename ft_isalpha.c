/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorenev <skorenev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 15:31:58 by skorenev          #+#    #+#             */
/*   Updated: 2026/03/13 17:43:03 by skorenev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief   checks  for  an  alphabetic character; in the standard "C" locale, 
 * it is equivalent to (isupper(c) || islower(c)).
 * In some locales, there may be additional characters for which isalpha() 
 * is true—letters which are  neither  upper‐case nor lowercase.
 * 
 * @param c 
 * @return int 
 */
int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
