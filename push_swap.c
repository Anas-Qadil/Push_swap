/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 01:11:18 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/19 01:32:25 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int push_swap(t_stack_a **head, t_stack_a **headb)
{
	t_stack_a   *temp;
	t_stack_a   *node;

	temp = (*head);
	if (stack_size(head) == 3)
	{
		sort_three(head);
		return (1);
	}
	if (stack_size(head) == 2)
	{
		if ((*head)->x > (*head)->next->x)
		{
			sa(head);
			write(1, "sa\n", 3);
		}
		return (1);
	}
	if (stack_size(head) == 4)
	{
		sort_four(head, headb);
		return (1);
	}
	if (stack_size(head) == 5)
		sort_five(head, headb);
	else if (stack_size(head) <= 100)
		sort_hundred(head, headb);
	return (1);
}

int main(int argc, char **argv)
{
	int i = 2;
	t_stack_a	**head;
	t_stack_a	**headb;
	t_stack_a	*node;
	t_stack_a	*nodeb;

	if (argc < 2)
		return (-1);
	node = ft_lstnew_a(ft_atoi(argv[1]));
	head = &node;
	headb = (t_stack_a **)malloc(sizeof(t_stack_a *));
	(*headb) = NULL;

	while (i < argc)
	{
		build_stack(head, ft_atoi(argv[i]));
		i++;
	}
	push_swap(head, headb);
	// printf("\nlist a\n");
	// while (head && (*head))
	// {
	// 	printf("%d\n", (*head)->x);
	// 	(*head) = (*head)->next;
	// }
	// printf("list b\n");
	
	// while (headb && (*headb))
	// {
	// 	printf("%d\n", (*headb)->x);
	// 	(*headb) = (*headb)->next;
	// }
}
