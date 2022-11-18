/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lclerc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:08:26 by lclerc            #+#    #+#             */
/*   Updated: 2022/11/18 17:43:05 by lclerc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_lstdelone() takes as a parameter a node and frees the memory of the node's
 * content using the function 'del' given as a paramenter and free the node.
 * The memory of 'next' must not be freed.
 *
 * 'lst' is the node to free
 * 'del' is the address of the function used to delete the content.
 *
 */

void	ft_lstdelone(t_list *lst, void	(*del)(void *))
{
	while (!lst || !del)
		return;
	del(lst->content);
	free(lst);
	lst = NULL;
}
