/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:01:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/01 13:02:53 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	pointer_to_s;
	pointer_to_s = (char)s;
	
	if(n == 0)
		return(*s);
	while(n)
	{
		pointer_to_s = (char)ft_memset(s, 0, n);
	}
	return(*s);
}
	
