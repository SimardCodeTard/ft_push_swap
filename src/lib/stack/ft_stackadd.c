/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:04:29 by smenard           #+#    #+#             */
/*   Updated: 2025/12/18 16:09:01 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_list	*ft_stackadd_new_head(t_stack *stack, int value)
{
	stack->head = ft_lstadd_new_head(stack->head, value);
	stack->size += 1;
	return (stack->head);
}

t_list	*ft_stackadd_head(t_stack *stack, t_list *new_head)
{
	stack->head = ft_lstadd_head(stack->head, new_head);
	stack->size += 1;
	return (stack->head);
}

t_list	*ft_stackadd_new_tail(t_stack *stack, int value)
{
	stack->tail = ft_lstadd_new_tail(stack->tail, value);
	stack->size += 1;
	return (stack->tail);
}

t_list	*ft_stackadd_tail(t_stack *stack, t_list *new_tail)
{
	stack->tail = ft_lstadd_tail(stack->tail, new_tail);
	stack->size += 1;
	return (stack->tail);
}
