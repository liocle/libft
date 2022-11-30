/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <lclerc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 12:01:44 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/23 16:09:43 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * bezero() writes 'n' zeroed bytes to the string 's'. if 'n' is zero, bzero() 
 * does nothing.
 */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset((void *)s, 0, n);
}
