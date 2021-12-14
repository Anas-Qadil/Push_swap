/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:48:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/14 02:20:48 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack_a **head)
{
	t_stack_a	*node1;
	t_stack_a	*node2;
	t_stack_a	*node3;

	node1 = (*head);
	node2 = (*head)->next;
	node3 = (*head)->next->next;
	if (node1->x > node2->x && node2->x < node3->x && node1->x < node3->x)
	{
		write(1, "sa\n", 3);
		sa(head);
	}
	if (node1->x > node2->x && node1->x > node3->x && node2->x > node3->x)
	{
		write(1, "sa\n", 3);
		write(1, "rra\n", 4);
		sa(head);
		rra_rrb(head);
	}
	if (node1->x > node2->x && node1->x > node3->x && node2->x < node3->x)
	{
		write(1, "ra\n", 3);
		ra_rb(head);
	}
	if (node1->x < node2->x && node1->x < node3->x && node2->x > node3->x)
	{
		write(1, "sa\n", 3);
		write(1, "ra\n", 3);
		sa(head);
		ra_rb(head);
	}
	if (node1->x < node2->x && node1->x > node3->x && node2->x > node3->x)
	{
		write(1, "rra\n", 4);
		rra_rrb(head);
	}
}

void	sort_four(t_stack_a **head, t_stack_a **headb)
{
	t_stack_a	*node1, *node2;

	pa_pb(headb, head);
	write(1, "pb\n", 3);
	sort_three(head);
	pa_pb(head, headb);
	write(1, "pa\n", 3);
	if (sorted(head) == 1)
		return ;
	sa(head);
	write(1, "sa\n", 3);
	pa_pb(headb, head);
	write(1, "pb\n", 3);
	sort_three(head);
	pa_pb(head, headb);
	write(1, "pa\n", 3);
}

void	sort_five(t_stack_a **head, t_stack_a **headb)
{
	int	min;
	min = get_min(head);
	if ((*head)->x == min)
		pa_pb(headb, head);
	
}
