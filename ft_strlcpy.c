/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:05:18 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/02 15:51:56 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * strlcpy() and strlcat() copy and concatenate strings with the same input para
 * meters and output result as snprintf(3)
 *
 * strlcpy() and  strlcat() take the full size of the destination buffer and 
 * guarantee NUL termination, with the help of dstsize.
 *
 * strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL
 * terminating the result if dstsize is not 0.
 *
 * If the src and dst strings overlap, the behavior is undefined.
 * */
