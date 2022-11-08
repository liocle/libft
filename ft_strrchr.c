/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:35:11 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/08 10:42:34 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*	The strrchr() function is identical to strchr(), except it locates the last occur-
    rence of c.
*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	length;

	length = ft_strlen(s);
	p = (char *)s;
	while (length + 1 > 0)
	{
		if (p[length] == c)
			return (p + length);
		length--;
	}
	return (NULL);
}
