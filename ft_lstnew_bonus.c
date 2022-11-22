/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <lclerc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:09:32 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/22 17:38:05 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_lstnew() allocates with malloc() et returns a new element. The member
 * variable 'content' with the value of the parameter 'content' is initialized
 * with the value  of the parameter 'content'. The variable 'next' is
 * initialized to NULL.
 *
 * Full explanations here: 
 * https://www.geeksforgeeks.org/what-is-linked-list/?ref=gcse
 *
 * This function creates a head to to a list. The head points allows to point
 * at a node which will be according to its struct.
 * 
 */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (struct s_list *)malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}