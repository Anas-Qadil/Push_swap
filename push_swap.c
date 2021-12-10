/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:11:18 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/10 16:15:57 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int push_swap()
{
    return (1);
}

int main(int argc, char **argv)
{
    t_stack_a **head, *node1, *node2, *node3, *node4, *node5, *node6;
    head = &node1;
    node1 = ft_lstnew_a(8);
    node2 = ft_lstnew_a(5);
    node3 = ft_lstnew_a(6);
    node4 = ft_lstnew_a(3);
    node5 = ft_lstnew_a(1);
    node6 = ft_lstnew_a(2);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    // stack b

    t_stack_a **headb;
    *headb = NULL;
    pa_pb(headb, head);
    while ((*headb))
    {
        printf("%d\n", (*head)->x);
        (*head) = (*head)->next;
    }
}
