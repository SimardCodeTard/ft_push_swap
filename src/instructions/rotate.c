/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 19:43:14 by smenard           #+#    #+#             */
/*   Updated: 2025/12/18 19:45:56 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "instructions.h"

static void	rotate(t_stack *stack)
{
	if (stack->size == 0)
	{
		ft_printf("WARNING: tried to rotate a stack of size 0\n");
		return ;
	}
	ft_stackadd_tail(stack, ft_stackremove_head(stack));
}

void	rotate_a(t_stacks *stacks)
{
	rotate(stacks->stack_a);
}

void	rotate_b(t_stacks *stacks)
{
	rotate(stacks->stack_b);
}

void	rotate_all(t_stacks *stacks)
{
	rotate(stacks->stack_a);
	rotate(stacks->stack_b);
}
