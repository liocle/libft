/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 15:18:03 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/14 13:49:30 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 *	Allocates with malloc() and returns a copy of 's1' with the characters
 *	specified in "set' removed from the beginning and the end of the string.
 * 	
 * 	Returns the trimmed string or NULL if the allocaiton fails.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed_string;
	int	s1_length;
	int	bookmark_start;
	int	bookmark_end;
	int	i;

	if (!s1)
		return (NULL);
	i = 0;
	bookmark_start = 0;
	s1_length = ft_strlen(s1);
	bookmark_end = s1_length;
	while (bookmark_start != bookmark_end - 1 && set[i])
	{
		if (set[i] != s1[bookmark_start])
			i++;
		else 
		{
			i = 0;
			bookmark_start += 1;
		}
	}
	i = 0;
	while (bookmark_start != bookmark_end && set[i])
	{
		if (set[i] != s1[bookmark_end - 1])
			i++;
		else
		{
			i = 0;
			bookmark_end  -= 1;
		}
	}
//	printf("bookmark_start[%i], bookmark_end[%i]\n", bookmark_start, bookmark_end);
	trimmed_string = (char *)malloc((bookmark_end - bookmark_start + 1) * 
			sizeof(char));
	if (trimmed_string == NULL)
		return (NULL);
	if (bookmark_start == bookmark_end - 1)
		*trimmed_string = '\0';
	ft_strlcpy(trimmed_string, s1 + bookmark_start, (bookmark_end - bookmark_start) + 1);
	return (trimmed_string);
}
