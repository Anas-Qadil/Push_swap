/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:35:58 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 15:15:53 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rra_rrb(t_stack_a **stack)
{
    t_stack_a   *elem;
    t_stack_a   *save;
    t_stack_a   *b_node;

    if ((*stack) == NULL || ((*stack)->next) == NULL)
        return ;
    elem = (*stack);
    save = (*stack);
    while (elem->next)
    {
        if (elem->next->next == NULL)
            b_node = elem;
        elem = elem->next;
    }
    b_node->next = NULL;
    elem->next = save;
    (*stack) = elem;
    
}

void    rrr(t_stack_a **stack_a, t_stack_a **stack_b)
{
    rra_rrb(stack_a);
    rra_rrb(stack_b);
}
