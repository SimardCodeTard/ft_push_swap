/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_defines.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 11:18:22 by smenard           #+#    #+#             */
/*   Updated: 2025/12/16 11:25:28 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_DEFINES_H
# define LIB_DEFINES_H

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*prev;
	int				value;
}					t_list;

#endif