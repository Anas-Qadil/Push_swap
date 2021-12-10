/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:13:02 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/10 15:41:52 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// hado kaysegmentiw lakan stack = NULL u should pay attention to that

void    sa(t_stack_a **stack)
{
	t_stack_a   *elem1;
	t_stack_a   *elem2;
	t_stack_a	*node;

	if ((*stack)->next == NULL || (*stack) == NULL)
		return ;
	
	node = (*stack);
	// check ila kano ghir 2 nodes
	if (node->next->next == NULL)
	{
		elem1 = node->next;
		elem1->next = node;
		node->next = NULL;
	}
	while (node->next)
	{
		if (node->next->next != NULL)
			elem2 = node;
		elem1 = node;
		node = node->next;
	}
	elem1->next = NULL;
	node->next = elem1;
	elem2->next = node;
}
