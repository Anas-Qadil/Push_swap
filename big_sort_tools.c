/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_tools.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:17:42 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/18 20:01:23 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int *get_three_elements(t_stack_a **head, int index)
{
    int *sorted;
    int *tab;
    int i;
    int size;

    i = 0;
    tab = malloc(sizeof(int) * 3);
    sorted = sort_reference(head);
    size = stack_size(head);
    if (index != size)
        tab[0] = sorted[index];
    if (index + 1 != size)
        tab[1] = sorted[index + 1];
    if (index + 2 != size)
        tab[2] = sorted[index + 2];
    return (tab);
}

int *big_chunk(t_stack_a **head, int chunk)
{
    int *tab;
    int i = 0;
    int j = 0;
    t_stack_a   *temp;
    int *sorted;

    temp = (*head);
    tab = malloc(sizeof(int) * 5);
    sorted = sort_reference(head);
    if (chunk == 0)
    {
        while (i < 5)
        {
            tab[j] = sorted[i];
            j++;
            i++;
        }
    }
    else
    {
        int min = chunk * 5;
        int max = (chunk * 5) + 5;
        i = 0;
        while (min < max)
        {
            
            tab[i] = sorted[min];
            min++;
            i++;
        }
    }
    return (tab);
}

int how_many_chunk(t_stack_a **head)
{
    t_stack_a *temp;
    int size;
    int count_chunks;
    int i;
    
    count_chunks = 0;
    i = 0;
    temp = (*head);
    while (temp)
    {
        i++;
        if (i == 5)
        {
            i = 0;
            count_chunks++;
        }
        temp = temp->next;
    }
    
    return (count_chunks);
}

int get_pos(t_stack_a **head, int x)
{
    t_stack_a *temp;
    int pos;
    int i;

    i = 0;
    temp = (*head);
    while (temp)
    {
        i++;
        if (temp->x == x)
        {
            pos = i;
            break;
        }
        temp = temp->next;
    }
    return (pos);
}