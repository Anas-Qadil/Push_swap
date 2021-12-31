/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:16:29 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 14:49:21 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_list *l)
{
	int	i;

	i = 0;
	while (l)
	{
		i++;
		l = l->next;
	}
	return (i);
}

t_list	*get_last(t_list *l)
{
	if (l == NULL)
		return (NULL);
	while (l->next)
	{
		l = l->next;
	}
	return (l);
}

int	list_contains_value(t_list *l, int value)
{
	while (l)
	{
		if (l->value == value)
			return (1);
		l = l->next;
	}
	return (0);
}

int	is_ordered(t_mem *m)
{
	int		prev;
	t_list	*l;

	if (m->b)
		return (0);
	if (!m->a)
		return (1);
	l = m->a;
	prev = l->value;
	while (l)
	{
		if (prev > l->value)
			return (0);
		prev = l->value;
		l = l->next;
	}
	return (1);
}

t_list	*get_node_from_array(int arr[], t_mem *mem, int elem)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = mem->a;
	while (temp)
	{
		if (elem == 0)
		{
			if (temp->value == arr[0])
				return (temp);
		}
		else
		{
			if (temp->value == arr[1])
				return (temp);
		}
		temp = temp->next;
	}
	return (NULL);
}
