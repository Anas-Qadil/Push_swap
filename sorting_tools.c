/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:15:24 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/17 20:30:59 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	sorted(t_stack_a **head)
{
	t_stack_a	*temp;

	temp = (*head);
	while (temp)
	{
		if (temp->next != NULL && temp->x > temp->next->x)
			return (0);
		temp = temp->next;
	}
	return (1);
}

int	*sort_reference(t_stack_a **head)
{
	int	save;
	t_stack_a *temp;
	int	size;
	int	*result;
	int i;

	i = 0;
	size = stack_size(head);
	result = malloc(sizeof(int) * (size));
	temp = (*head);

	while(temp)
	{
		result[i] = temp->x;
		temp = temp->next;
		i++;
	}
	i = 0;
	while (i < size)
	{
		if (result[i] > result[i + 1] && (i != size - 1))
		{
			save = result[i + 1];
			result[i + 1] = result[i];
			result[i] = save;
			i = 0;
		}
		else
			i++;
	}
	return (result);
}