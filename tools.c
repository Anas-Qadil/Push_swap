/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:58:42 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/10 15:10:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// stack a
t_stack_a	*ft_lstnew_a(int x)
{
	t_stack_a	*node;
	t_stack_a	*previous;
	
	previous = NULL;
	node = malloc(sizeof(t_stack_a));
	if (!node)
		return (NULL);
	node->x = x;
	node->next = NULL;
	return (node);
}
// stack b

// function i mig
void	ft_lstadd_back(t_stack_a **lst, t_stack_a *new)
{
	t_stack_a	*temp;

	temp = *lst;
	if (temp == NULL)
		*lst = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}
void	ft_lstadd_front(t_stack_a **lst, t_stack_a *new)
{
	new->next = *lst;
	*lst = new;
}

void	ft_lstclear_a(t_stack_a **lst)
{
	t_stack_a	*curr_node;
	t_stack_a	*next_node;

	curr_node = *lst;
	while (curr_node != NULL)
	{
		next_node = curr_node->next;
		free (curr_node);
		curr_node = next_node;
	}
	*lst = NULL;
}
