/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:23:42 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/03 15:24:35 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The strlcpy() and strlcat() functions copy and concatenate strings with the same input parame-
 *    ters and output result as snprintf(3).  They are designed to be safer, more consistent, and
 *    less error prone replacements for the easily misused functions strncpy(3) and strncat(3).

 *    strlcpy() and strlcat() take the full size of the destination buffer and guarantee NUL-termi-
 *    nation if there is room.  Note that room for the NUL should be included in dstsize.

 *    strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst)
 *    - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string
 *    was longer than dstsize (in practice this should not happen as it means that either dstsize is
 *   incorrect or that dst is not a proper string).
 * 	
 *  If the src and  dst strings overlap, the behavior is unndefined.
 *
 * 	strlcat returns the total length of the string 
 * */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len_src;
	size_t len_dst;
	int	i;
	size_t j;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dst);
	i = 0;
	j = len_dst - 1;
	if (dstsize >= len_src + len_dst) // How to account for '\0' * 2?
	{
		dst
		while(i <= len_dst)
			dst[] = src[i];

	}

}



