/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:50:16 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 18:52:08 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa_pb(t_stack_a **stack_b, t_stack_a **stack_a)
{
    t_stack_a   *elem_a;
    t_stack_a   *elem_b;
    t_stack_a   *node;
    
    if (stack_a == NULL)
        return ;
    if (stack_b == NULL)
    {
        elem_a = (*stack_a);
        node = ft_lstnew_a((*stack_a)->x);
        (*stack_b) = node;
        (*stack_a) = (*stack_a)->next;
        return ;
    }

    elem_b = (*stack_b);
    elem_a = (*stack_a);
    (*stack_a) = (*stack_a)->next;
    elem_a->next = elem_b;
    (*stack_b) = elem_a;
}