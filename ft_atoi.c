/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 12:01:48 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/04 14:58:55 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	long int result;
	int	sign;
	
	result = 0;
	sign = 1;
	while((*str == 32) || ((*str >= 9) && (*str <= 13)))
		str++;
	if(*str++ == '-')
		sign = -1;
	if(*str++ == '+')
	printf("Result is %ld\n", result);
	while(*str >= '0' && *str <= '9')
	{
		printf("Result is %ld\n", result);
		printf("someone here entering the while?\n");
		result = result * 10 + *str - 0;
		str++;
	}
	printf("Result is %ld\n", result);
	return((int)(result * sign));
}
