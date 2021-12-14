/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:00:13 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 13:34:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	build_stack(t_stack_a **head, int x)
{
	t_stack_a	*temp;
	t_stack_a	*node;

	temp = (*head);
	node = ft_lstnew_a(x);
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node;
}