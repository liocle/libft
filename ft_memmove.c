/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 10:49:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/07 18:35:38 by lclerc           ###   ########.fr       */
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
	char	*source;
	char	*destination;

	i = 0;
	source = (char *)src;
	destination = (char *)dst;
	if(!source && !destination)
		return(NULL);
	if(source < destination)
	{
		source = source+ len - 1;
		destination = destination+ len - 1;
		while(len--)
			*destination--  = *source--;
	}
	else
		ft_memcpy(destination, source, len);
	return(dst);
}
