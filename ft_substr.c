/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:24:56 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/07 14:51:17 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * ft_substr() allocates with malloc() and returns a string of characters from
 * string 's'. The new string starts at index 'start' and has as maximum size
 * 'len'
 *
 * ft_substr() returns a pointer to the new string, or NULL if allocation has 
 * the memory allocation has failed.
 *
 */

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;

	new_string = (char *)malloc(len * sizeof(char);
			ifr( new_string == 




}
