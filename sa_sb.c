/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:13:02 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 15:08:26 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// hado kaysegmentiw lakan stack = NULL u should pay attention to that

void    sa(t_stack_a **stack)
{
	t_stack_a	*node1;
	t_stack_a	*node2;

	node1 = (*stack);
	node2 = (*stack)->next;
	node1->next = node2->next;
	node2->next = node1;
	(*stack) = node2;
}