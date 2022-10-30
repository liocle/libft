/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:14:13 by lclerc            #+#    #+#             */
/*   Updated: 2022/10/29 17:30:04 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically compare the null-terminated
     strings s1 and s2.

     The strncmp() function compares not more than n characters.  Because strncmp() is
     designed for comparing strings rather than binary data, characters that appear
     after a `\0' character are not compared.

RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than, equal to, or
     less than 0, according as the string s1 is greater than, equal to, or less than
     the string s2.  The comparison is done using unsigned characters, so that `\200'
     is greater than `\0'.i
*/

#include "libft.h"

int	strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;
	
	i = 0;
	while((s1[i] == s2[i]) && ((i + 1) <= n))
		i++;
	return(s1[i] - s2[i]);
	}
