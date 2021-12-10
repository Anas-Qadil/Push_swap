/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:46:06 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/10 14:30:46 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void    ra_rb(t_stack_a **stack)
{
    t_stack_a   *node;
    t_stack_a   *save;
    t_stack_a   *temp;

    save = (*stack);
    temp = (*stack);
    while (temp->next)
        temp = temp->next;
    temp->next = save;
    (*stack) = save->next;
    save->next = NULL;
}

void    rr(t_stack_a **stack_a, t_stack_a **stack_b)
{
    ra_rb(stack_a);
    ra_rb(stack_b);
}

// 1 2
// 2 3
// 3 1