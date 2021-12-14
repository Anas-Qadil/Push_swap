/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_tools.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 22:15:24 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 22:18:23 by aqadil           ###   ########.fr       */
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