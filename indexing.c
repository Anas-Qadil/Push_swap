/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:05:41 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 00:30:32 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tag_list(t_list **start, t_mem *mem)
{
	int		i;
	t_list	*node;

	node = (*start);
	i = 0;
	while (node)
	{
		node->index = i++;
		node = node->next_sort;
	}
	mem->max = i;
}
