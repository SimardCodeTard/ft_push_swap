/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:27:19 by smenard           #+#    #+#             */
/*   Updated: 2025/12/16 14:31:25 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstclear_start(t_list *lst_start)
{
	if (!lst_start)
		return ;
	ft_lstclear_start(lst_start->next);
	*(lst_start->size) -= 1;
	free(lst_start);
}

void	ft_lstclear_end(t_list *lst_end)
{
	if (!lst_end)
		return ;
	*(lst_end->size) -= 1;
	free(lst_end);
}
