/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:48:05 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/30 16:33:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	has_tag(t_list *list, int tag)
{
	while (list)
	{
		if (list->index == tag)
			return (1);
		list = list->next;
	}
	return (0);
}

void	sort_three(t_mem *mem)
{
	t_list	*node3;

	node3 = mem->a->next->next;
	if (mem->a->value > mem->a->next->value
		&& mem->a->next->value < node3->value && mem->a->value < node3->value)
		swap_a(mem);
	if (mem->a->value > mem->a->next->value && mem->a->value > node3->value
		&& mem->a->next->value > node3->value)
	{
		swap_a(mem);
		rev_rotate_a(mem);
	}
	if (mem->a->value > mem->a->next->value && mem->a->value > node3->value
		&& mem->a->next->value < node3->value)
		rotate_a(mem);
	if (mem->a->value < mem->a->next->value && mem->a->value < node3->value
		&& mem->a->next->value > node3->value)
	{
		swap_a(mem);
		rotate_a(mem);
	}
	if (mem->a->value < mem->a->next->value
		&& mem->a->value > node3->value && mem->a->next->value > node3->value)
		rev_rotate_a(mem);
}

t_list	*get_first_element(t_mem *mem)
{
	t_list	*node;

	node = mem->a;
	return (node);
}

t_list	*get_smallest_node(t_mem *mem, int elem)
{
	int		arr[5];
	int		i;
	t_list	*temp;
	int		temporary;

	i = 0;
	temp = mem->a;
	while (temp)
	{
		arr[i++] = temp->value;
		temp = temp->next;
	}
	i = -1;
	while (++i < 5)
	{
		if (arr[i] > arr[i + 1])
		{
			temporary = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = temporary;
			i = -1;
		}
	}
	temp = get_node_from_array(arr, mem, elem);
	return (temp);
}

void	five_sort(t_mem *mem)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*temp;
	int		counter;

	counter = 0;
	node1 = get_smallest_node(mem, 0);
	node2 = get_smallest_node(mem, 1);
	temp = get_first_element(mem);
	while (temp)
	{
		if ((temp == node1 || temp == node2) && ++counter)
			push_b(mem);
		else
			rotate_a(mem);
		if (counter == 2)
			break ;
		temp = get_first_element(mem);
	}
	sort_three(mem);
	push_a(mem);
	push_a(mem);
	if (mem->a->value > mem->a->next->value)
		swap_a(mem);
}
