/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 17:00:00 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/18 20:38:54 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	move_chunk(t_stack_a **head, t_stack_a **headb, int *tab)
{
	int pos;
	int	which_one;
	int i;
	t_stack_a *first_node;

	first_node = first_element(head);
	i = 0;
	which_one = 0;
	pos = get_pos(head, tab[0]);
	
	while(i < 5)
	{
		pos = get_pos(head, tab[i]);
		if (pos < 10)
		{
			while (first_node->x != tab[i])
			{
				// write(1, "ra\n", 3);
				ra_rb(head);
				first_node = first_element(head);
			}
			// write(1, "pb\n", 3);
			pa_pb(headb, head);
		}
		else
		{
			while (first_node->x != tab[i])
			{
				// write(1, "rra\n", 4);
				rra_rrb(head);
				first_node = first_element(head);
			}
			// write(1, "pb\n", 3);
			pa_pb(headb, head);
		}
		first_node = first_element(head);
		i++;
	}
	
}

void	sort_hundred(t_stack_a **head, t_stack_a **headb)
{
	int *tab;
	int i;
	int size;
	t_stack_a *first_node;
	int count_chunks;

	i = 0;
	size = stack_size(head);
	first_node = first_element(head);
	count_chunks = how_many_chunk(head);
	i = 0;
	while (i < count_chunks)
	{
		tab = big_chunk(head, 0);
		move_chunk(head, headb, tab);
		i++;
	}
}