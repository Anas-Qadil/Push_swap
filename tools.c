/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 14:58:42 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/17 15:46:13 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// stack a
t_stack_a	*ft_lstnew_a(int x)
{
	t_stack_a	*node;
	t_stack_a	*previous;
	
	previous = NULL;
	node = malloc(sizeof(t_stack_a));
	if (!node)
		return (NULL);
	node->x = x;
	node->next = NULL;
	return (node);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - 48);
		i++;
	}
	return (result * sign);
}

t_stack_a *first_element(t_stack_a **head)
{
	t_stack_a	*first;

	first = (*head);
	return (first);
}
