/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smenard <smenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:33:11 by vquetier          #+#    #+#             */
/*   Updated: 2025/12/16 15:44:34 by smenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEM_H
# define MEM_H

# include "headers/mem_defines.h"

void	ft_memset(void *ptr, uint8_t b, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);

#endif
