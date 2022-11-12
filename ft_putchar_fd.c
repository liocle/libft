/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:30:34 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/09 17:54:08 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*
 * ft_putchar_fd() write the character 'c' on the give filedescriptor 'fd'
 */

void	ft_putchar_fd(char c, int fd)
{	
	write (fd, &c, 1);
}