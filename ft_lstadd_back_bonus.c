/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 16:00:22 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/18 16:29:32 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstadd_back() adds the node new at the end of the list.
 *
 * 'lst' is the address of a pointer to the first link of a list
 * 'new' is the address of a pointer to the node to be added to the list.
 *
 */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
//	while (*lst->next != NULL)
//		lst = lst->next;
//	lst->next = new;
	last = ft_lstlast(*lst);
	last->next = new;
	return ;

}
