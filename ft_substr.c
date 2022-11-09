/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:24:56 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/09 12:32:51 by lclerc           ###   ########.fr       */
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
	size_t	i;		

	i = 0;
	if(!s)
		return (NULL);
	new_string = (char *)malloc(len * sizeof(char) + 1);
	if (new_string == NULL)
		return (NULL);
	if (start > ft_strlen(s))
	{	
		new_string[0] = '\0';
		return (new_string);
	}
	while ((i < len) && (s[i] != '\0'))
	{
		new_string[i] = s[start + i];
		i++;
	}
	new_string[i]= '\0';
	return (new_string);
}
