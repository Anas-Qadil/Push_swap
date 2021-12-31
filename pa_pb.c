/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:50:16 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 14:35:06 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_mem *mem)
{
	push_top_x1_on_x2(&(mem->a), &(mem->b));
	if (mem->print)
		ft_putstr("pb");
}

void	push_a(t_mem *mem)
{
	push_top_x1_on_x2(&(mem->b), &(mem->a));
	if (mem->print)
		ft_putstr("pa");
}
