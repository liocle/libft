/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 08:47:54 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/02 10:44:37 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* 
 *	memcpy() copies n bytes from memory area src to memory area dst. If dst and 
 *	src overlap, behaviour is undefined, even though some compilers may handle 
 *	it. This is the main difference with memmove(), which can handle overlapping 
 *	memory addresses using a buffer. See memmove()
 *
 *	Should I remove from the prototypes the restrict part (exclude C99)? instru
 *	ctions may lead me to think yes, but man memcpy shows that the standard is 
 *	IS0 C90, what to do? Here I removed it.
 *
 * 	Beware the headers prototype has been modified acccordingly!
 *
 *	memcpy() function returns the original value of dst.
 * */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	while(i <= n)
	{
		d[i] = s[i];
		i++;
	}
	return(dst);
}