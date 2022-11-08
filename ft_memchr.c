/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:24:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/07 18:39:39 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * The memchr() locates the first occurence of c (converted as unsigned char) in 
 * string s. 
 *
 * Returns a pointer to the byte located, or ULL if no such byte exits within
 * n bytes.
 */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	
	str = (unsigned char *)s;
	while(n--)
	{
		if(*str == (unsigned char)c)
			return(str);
		str++;
	}
	return(0);
}
