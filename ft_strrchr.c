/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <lclerc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:35:11 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/22 16:04:00 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	size_t	length;

	length = ft_strlen(s);
	p = (char *)s;
	while (length + 1 > 0)
	{
		if (p[length] == (char)c)
			return (p + length);
		length--;
	}
	return (NULL);
}
