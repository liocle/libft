/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 12:15:51 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/05 14:46:09 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * The calloc() contiguously allocates enough space for count objects that
 * are size bytes of memory each and returns  a pointer to the allocated memory.
 * The allocated memory is  filled with bytes of value zero.
 *
 * This function returns a pointer to the allocated memory, or NULL if the 
 * requiest fails.
 */

void	*ft_calloc(size_t count, size_t size)
{
	char	*pointer_to_allocated_memory;
	
	pointer_to_allocated_memory = (void *)malloc(size * count);
	if (pointer_to_allocated_memory == NULL)
		return (NULL);
	ft_bzero(pointer_to_allocated_memory, count * size);
	return (pointer_to_allocated_memory);
}	
