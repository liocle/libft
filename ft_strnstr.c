/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:38:02 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/08 18:00:53 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * The strnstr() locates the first occurence of the NULL-terminated string needle
 * in the NULL-terminated string haystack, where not more than len characters 
 * are searched. 
 *
 * Characters that appear after a '\0' characters are not searched.
 *
 * FreeBSD specific API!
 *
 * RETURN VALUES:
 * If needle is an empty string			-> haystack is returned.
 * If needle occurs nowhere in haystack -> NULL is returned.
		return ((char *)haystack);
		return ((char *)haystack);
		return ((char *)haystack);
		return ((char *)haystack);
 * Otherwise, a pointer to the first character of the 1st occurence of needle is
 * returned.
 *
 */
char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;	
	size_t	bookmark;

	bookmark = 0;
	if (!len || !*needle)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0)
		return (NULL);
	while (bookmark <= len && haystack[bookmark] != '\0')
	{
		i = 0;
		while ((haystack[bookmark + i] == needle[i]) && (bookmark + i < len))
		{
			if (needle[i + 1] == '\0')
				return ((char *)haystack + bookmark);
			i++;
		}
		bookmark++;
	}
	return (NULL);
}
