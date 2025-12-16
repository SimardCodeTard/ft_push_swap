/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:39:58 by smenard           #+#    #+#             */
/*   Updated: 2025/12/16 15:14:44 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_lstnew(int value, size_t *size)
{
	t_list	*new;

	// TODO: use ft_calloc
	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	if (size)
		new->size = size;
	else
		new->size = malloc(sizeof(size_t));
	if (!new->size)
		return (ft_lstclear(new));
	return (new);
}
