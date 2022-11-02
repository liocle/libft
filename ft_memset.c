/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:41:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/01 13:02:50 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* Since we cannot manipulate direcly the void *b parameter, let's create a char
 * string pointer_to_b. It is set equal to a char casted version of b.
 *
 * Should the string lenght be used and compared to len? 
 *
 * How wrong it is to not typecast void *b into (char *) for pointer_to_b ? 
 * */


void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*pointer_to_b;
	pointer_to_b = (char *)b;
	
	while(len--)
		pointer_to_b[len] = (unsigned char)c;
	return(b);
}
