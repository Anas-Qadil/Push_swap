/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:48:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/17 17:33:33 by aqadil           ###   ########.fr       */
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
	t_stack_a	*first_node;
	t_stack_a	*last_node;
	int	min;
	int check = 0;

	min = get_min(head);
	last_node = get_last_node(head);
	while (1)
	{
		first_node = first_element(head);
		if (first_node->x == min)
		{
			write(1, "pb\n", 3);
			check = 1;
			pa_pb(headb, head);
		}
		else if (last_node->x == min)
		{
			write(1, "rra\n", 4);
			rra_rrb(head);
		}
		else
		{
			write(1, "ra\n", 3);
			ra_rb(head);
		}
		if (check == 1)
			break;	
	}
	sort_three(head);
	pa_pb(head, headb);
	write(1, "pa\n", 3);
}

void	sort_five(t_stack_a **head, t_stack_a **headb)
{
	int	min;
	int second_min;
	t_stack_a *temp;
	t_stack_a	*first_elem;
	int size = 5;

	min = get_min(head);
	second_min = get_second_min(head);
	temp = (*head);
	first_elem = (*head);

	while (1)
	{
		first_elem = first_element(head);
		if (first_elem->x == min)
		{
			size--;
			write(1, "pb\n", 3);
			pa_pb(headb, head);
		}
		first_elem = first_element(head);
		if (first_elem->x == second_min)
		{
			size--;
			write(1, "pb\n", 3);
			pa_pb(headb, head);
		}
		else
		{
			write(1, "ra\n", 3);
			ra_rb(head);
		}
		if (size == 3)
			break;
	}
	
	sort_three(head);
	pa_pb(head, headb);
	write(1, "pa\n", 3);
	pa_pb(head, headb);
	write(1, "pa\n", 3);
	if ((*head)->x > (*head)->next->x)
	{
		write(1, "sa\n", 3);
		sa(head);
	}
}
