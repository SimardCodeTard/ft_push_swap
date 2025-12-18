/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 12:55:53 by vquetier          #+#    #+#             */
/*   Updated: 2025/12/18 16:17:05 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_args	*args;

	args = parse(ac, av);
	if (!args || !args->stacks->stack_a->head)
	{
		__builtin_printf("ERROR EH OUI\n");
		return (1);
	}
	free_args(args, FREE_ARGS_ALL);
}
