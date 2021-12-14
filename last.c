/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:57:31 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/13 16:57:52 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	do_pb_2(t_push *stack, t_stack *tmp)
// {
// 	if (stack->a)
// 	{
// 		stack->a = get_head(stack->a);
// 		tmp = stack->a;
// 		stack->a = stack->a->next;
// 		if (stack->a)
// 			stack->a->prev = NULL;
// 	}
// 	stack->b = tmp;
// 	tmp->next = NULL;
// 	tmp->prev = NULL;
// }

// void	do_pb(t_push *stack)
// {
// 	t_stack	*tmp;

// 	tmp = NULL;
// 	if (stack->b)
// 	{
// 		if (stack->a)
// 		{
// 			stack->a = get_head(stack->a);
// 			tmp = stack->a;
// 			stack->a = stack->a->next;
// 			if (stack->a)
// 				stack->a->prev = NULL;
// 		}
// 		stack->b = get_head(stack->b);
// 		stack->b->prev = tmp;
// 		tmp->next = stack->b;
// 		tmp->prev = NULL;
// 	}
// 	else
// 		do_pb_2(stack, tmp);
// 	write (1, "pb\n", 3);
// }

// void	do_pa_2(t_push *stack, t_stack *tmp)
// {
// 	if (stack->b)
// 	{
// 		stack->b = get_head(stack->b);
// 		tmp = stack->b;
// 		stack->b = stack->b->next;
// 		if (stack->b)
// 			stack->b->prev = NULL;
// 	}
// 	stack->a = tmp;
// 	tmp->next = NULL;
// 	tmp->prev = NULL;
// }

// void	do_pa(t_push *stack)
// {
// 	t_stack	*tmp;

// 	tmp = NULL;
// 	if (stack->a)
// 	{
// 		if (stack->b)
// 		{
// 			stack->b = get_head(stack->b);
// 			tmp = stack->b;
// 			stack->b = stack->b->next;
// 			if (stack->b)
// 				stack->b->prev = NULL;
// 		}
// 		stack->a = get_head(stack->a);
// 		stack->a->prev = tmp;
// 		tmp->next = stack->a;
// 		tmp->prev = NULL;
// 	}
// 	else
// 		do_pa_2(stack, tmp);
// 	write (1, "pa\n", 3);
// }
