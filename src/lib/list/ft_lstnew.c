/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:39:58 by smenard           #+#    #+#             */
/*   Updated: 2025/12/16 14:42:03 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	// TODO: use ft_calloc
	new = malloc(sizeof(t_list));
	new->value = value;
	return (new);
}