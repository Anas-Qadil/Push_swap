/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:15:24 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 14:47:36 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_resolve(t_mem *mem)
{
	mem->big = find_biggest_loop(mem->a, 1);
	mem->size = list_size(mem->a);
	mem->group_cnt = ft_max(1, (int)(mem->max / 150.0));
	mem->group_sz = mem->max / mem->group_cnt;
}

int	distance_to_top(t_list *a, int tag)
{
	int	i;
	int	size;

	i = 0;
	size = list_size(a);
	while (a)
	{
		if (a->index == tag)
			break ;
		a = a->next;
		i++;
	}
	if (i > size / 2)
		i -= size;
	return (i);
}

int	distance_to_tag(int tag, int size)
{
	if (tag >= size / 2)
		tag -= size;
	return (tag);
}

t_list	*closest_in_group(t_list *list, int cur_group, int group_sz)
{
	t_list	*closest;
	t_list	*cur;
	int		distance;
	int		cur_dist;

	distance = 8000000;
	closest = NULL;
	cur = list;
	while (cur)
	{
		if (cur->index <= group_sz * cur_group && !cur->keep)
		{
			cur_dist = distance_to_top(list, cur->index);
			if (ft_abs(cur_dist) < ft_abs(distance))
			{
				distance = cur_dist;
				closest = cur;
				if (distance == 0)
					break ;
			}
		}
		cur = cur->next;
	}
	return (closest);
}
