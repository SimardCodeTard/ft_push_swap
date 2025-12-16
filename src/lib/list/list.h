/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 13:10:00 by smenard           #+#    #+#             */
/*   Updated: 2025/12/16 13:25:58 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "lib_defines.h"

t_list	*ft_lstnew(void);

t_list	*ft_lstadd_head(t_list *lst, int value);

t_list	*ft_lstadd_tail(t_list *lst, int value);

t_list	*ft_lstremove_head(t_list *lst);

t_list	*ft_lstremove_tail(t_list *lst);


#endif
