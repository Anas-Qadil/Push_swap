/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:44:08 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 21:25:00 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_size(t_stack_a **head)
{
	t_stack_a   *temp;
	int i;

	i = 0;
	temp = (*head);
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

void	pop_front(t_stack_a	**head)
{
	t_stack_a	*node;

	node = (*head);
	(*head) = (*head)->next;
	free(node);	
}

void	pop_last(t_stack_a **head)
{
	t_stack_a	*node;
	
	if (head == NULL)
		return ;
	if ((*head)->next == NULL)
	{
		free((*head));
		*head = NULL;
		return ;
	}
	node = (*head);
	while (node->next->next)
	{
		node = node->next;
	}
	node->next = NULL;
	free(node->next);
	node->next = NULL;
}
