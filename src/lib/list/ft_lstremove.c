/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:26:58 by smenard           #+#    #+#             */
/*   Updated: 2025/12/16 14:33:43 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_lstremove_head(t_list *lst)
{
	t_list	*next;

	if (!lst)
		return (NULL);
	while (lst->prev)
		lst = lst->prev;
	next = lst->next;
	ft_lstclear_start(lst);
	next->prev = NULL;
	return (next);
}

t_list	*ft_lstremove_tail(t_list *lst)
{
	t_list *prev;

	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	prev = lst->prev;
	ft_lstclear_start(lst);
	prev->next = NULL;
	return (prev);
}