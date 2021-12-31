/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:44:08 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 14:50:04 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == 0)
			return (0);
		++s1;
		++s2;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	ft_swap_list(t_list **prevnext, t_list *last)
{
	t_list	*swap;

	swap = *prevnext;
	*prevnext = last->next_sort;
	swap->next_sort = last->next_sort->next_sort;
	(*prevnext)->next_sort = swap;
}

void	ft_list_sort(t_list **begin_list)
{
	t_list	*last;
	t_list	*prev;

	prev = NULL;
	last = *begin_list;
	while (last && last->next_sort)
	{
		if (last->value > last->next_sort->value)
		{
			if (prev == NULL)
				ft_swap_list(begin_list, last);
			else
				ft_swap_list(&(prev->next_sort), last);
			last = *begin_list;
			prev = NULL;
		}
		else
		{
			prev = last;
			last = last->next_sort;
		}
	}
}

void	ft_putstr(char *str)
{
	int		i;
	char	n;

	i = 0;
	while (str[i])
		i++;
	n = '\n';
	write(1, str, i);
	write(1, &n, 1);
}

void	ft_free_list(t_list **list)
{
	t_list	*l;
	t_list	*next;

	l = *list;
	while (l)
	{
		next = l->next;
		free(l);
		l = next;
	}
	*list = NULL;
}
