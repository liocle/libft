/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:41:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/01 09:33:05 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putchar(int c)
{
	write(1,&c,1);
}

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	length_of_b;
	void	*pointer_to_b;
	pointer_to_b = *b;
	
	length_of_b = ft_strlen(b);
	if(len >= length_of_b)
		return (pointer_to_b);
	while(pointer_to_b[len])
	{
		pointer_to_b[len] = ft_putchar((unsigned char)c);
		len--;
	}
	return(pointer_to_b);
}
