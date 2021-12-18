/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 02:16:29 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/18 19:18:06 by aqadil           ###   ########.fr       */
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

int get_second_min(t_stack_a **head)
{
    int min;
    t_stack_a   *temp;
    int second_min;
    int *sorted_tab;

    sorted_tab = sort_reference(head);
    second_min = sorted_tab[1];
    return (second_min);
}

t_stack_a   *get_last_node(t_stack_a **head)
{
    t_stack_a   *temp;

    temp = (*head);
    while (temp->next)
        temp = temp->next;
    return (temp);
}

int tab_size(int *tab)
{
    int size;
    size = sizeof(tab) / sizeof(tab[0]);
    return (size);
}