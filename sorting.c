/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:57:39 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 14:58:26 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	insert_distance(t_list *list, int t, int size)
{
	t_list	*p;
	t_list	*c;
	int		i;
	int		moves[2];

	i = 0;
	p = get_last(list);
	c = list;
	moves[1] = 8000000;
	while (c)
	{
		if ((p->index > c->index && (t < c->index || t > p->index))
			|| (t > p->index && t < c->index))
		{
			moves[0] = i;
			if (moves[0] > size / 2)
				moves[0] = moves[0] - size;
			if (ft_abs(moves[0]) < moves[1])
				moves[1] = moves[0];
		}
		p = c;
		c = c->next;
		i++;
	}
	return (moves[1]);
}

void	calculate_b_rotation(t_mem *m, int max_dist, int *rot_a, int *rot_b)
{
	int	dist_total;
	int	insert;
	int	distance_b;
	int	i;

	i = 0;
	m->temp = m->b;
	while (m->temp)
	{
		distance_b = distance_to_tag(i++, m->max - m->size);
		insert = insert_distance(m->a, m->temp->index, m->size);
		dist_total = ft_abs(insert) + ft_abs(distance_b);
		if (insert > 0 && distance_b > 0)
			dist_total = dist_total - ft_min(distance_b, insert);
		if (insert < 0 && distance_b < 0)
			dist_total = dist_total + ft_max(distance_b, insert);
		if (dist_total < max_dist)
		{
			max_dist = dist_total;
			*rot_a = insert;
			*rot_b = distance_b;
		}
		m->temp = m->temp->next;
	}
}

void	populate_b(t_mem *m)
{
	int	rot_a;
	int	rot_b;

	while (m->b)
	{
		calculate_b_rotation(m, 8000000, &rot_a, &rot_b);
		rotate(m, rot_a, rot_b);
		push_a(m);
		(m->size)++;
	}
	rotate(m, distance_to_top(m->a, 0), 0);
}

int	can_swap(t_list *list)
{
	t_list	fake;
	t_list	fake2;
	int		count;
	int		count2;

	fake.next = &fake2;
	fake.index = list->next->index;
	fake2.next = list->next->next;
	fake2.index = list->index;
	count = find_biggest_loop(list, 0);
	count2 = find_biggest_loop(&fake, 0);
	if (count2 > count)
		return (1);
	return (0);
}

void	resolve(t_mem *m, int cur_group)
{
	int	distance;

	init_resolve(m);
	while (m->size >= m->big && cur_group <= (m->group_cnt + 1))
	{
		m->temp = closest_in_group(m->a, cur_group, m->group_sz);
		if (m->temp == NULL && ++cur_group)
		{
			continue ;
		}
		distance = distance_to_top(m->a, m->temp->index);
		if (m->a && can_swap(m->a))
		{
			swap_a(m);
			m->big = find_biggest_loop(m->a, 1);
		}
		else if (m->a && !m->a->keep && distance == 0)
		{
			push_b(m);
			(m->size)--;
		}
		else
			rotate_b_a(m);
	}
	populate_b(m);
}
