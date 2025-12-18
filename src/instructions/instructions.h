/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 15:19:38 by vquetier          #+#    #+#             */
/*   Updated: 2025/12/18 19:46:59 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTIONS_H
# define INSTRUCTIONS_H

# include "instructions_includes.h"

/* swap */
void	swap_a(t_stacks *stacks);
void	swap_b(t_stacks *stacks);
void	swap_all(t_stacks *stacks);

/* push */
void	push_a(t_stacks *stacks);
void	push_b(t_stacks *stacks);

/* rotate */
void	rotate_a(t_stacks *stacks);
void	rotate_b(t_stacks *stacks);
void	rotate_all(t_stacks *stacks);

/* reverse rotate */
void	reverse_rotate_a(t_stacks *stacks);
void	reverse_rotate_b(t_stacks *stacks);
void	reverse_rotate_all(t_stacks *stacks);

#endif
