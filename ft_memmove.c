/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:49:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/02 15:05:08 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * The memmove() function copies len bytes from string src to string dst. the 2 
 * strings may overlap. If the beginning of destination overlaps with end of the
 * source, copying  should be done backward.
 *
 * */

#include "libft.h"


void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *)src;
	d = (char *)dst;
	if(s < d)
	{
		s = s + len - 1;
		d = d + len - 1;
		while(len--)
			*d--  = *s--;
	}
	else
	{
		while(i <= len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return(dst);
}
