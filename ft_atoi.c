/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <lclerc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:01:48 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/22 13:02:52 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while ((*str == 32) || ((*str >= 9) && (*str <= 13)))
		str++;
	if (*str == '-')
	{
		sign = -1;
	}
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return ((int)(result * sign));
}
