/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:01:45 by smenard           #+#    #+#             */
/*   Updated: 2025/12/18 16:10:09 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "stack_includes.h"

/* ft_stacknew.c */
t_stack	*ft_stacknew(void);

/* ft_stackadd.c */
t_list	*ft_stackadd_new_head(t_stack *stack, int value);

t_list	*ft_stackadd_head(t_stack *stack, t_list *new_head);

t_list	*ft_stackadd_new_tail(t_stack *stack, int value);

t_list	*ft_stackadd_tail(t_stack *stack, t_list *new_tail);

/* ft_stackremove.c */
t_list	*ft_stackremove_head(t_stack *stack);

t_list	*ft_stackremove_tail(t_stack *stack);

#endif