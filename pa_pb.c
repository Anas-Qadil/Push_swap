/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 15:50:16 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/10 16:15:49 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    pa_pb(t_stack_a **stack_a, t_stack_a **stack_b)
{
    t_stack_a   *elem_a;
    t_stack_a   *elem_b;
    t_stack_a   *b_node;
    t_stack_a   *node;

    if ((*stack_b) == NULL)
        return ;
    elem_a = (*stack_a);
    elem_b = (*stack_b);
    if (elem_a != NULL)
        while (elem_a->next)
            elem_a = elem_a->next;
    if (elem_b->next == NULL)
    {
        node = ft_lstnew_a(elem_b->x);
        elem_a->next = node;
        free(*stack_b);
        *stack_b = NULL;
        return ;
    }
    while (elem_b->next)
    {
        if (elem_b->next->next == NULL)
            b_node = elem_b;
        elem_b = elem_b->next;
    }
    printf("%d", elem_b->x);
    if (elem_a == NULL)
    {
        node = ft_lstnew_a(elem_b->x);
        stack_a = &node;
        return ;
    }
    write(1, "b", 1);
    node = ft_lstnew_a(elem_b->x);
    elem_a->next = node;
    b_node->next = NULL;
    free(elem_b);
}
