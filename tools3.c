/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:16:29 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/14 02:18:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int get_min(t_stack_a **head)
{
    int min;
    t_stack_a   *temp;

    temp = (*head);
    min = temp->x;
    while (temp)
    {
        if (temp->x < min)
            min = temp->x;
        temp = temp->next;
    }
    return (min);
}