/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 12:19:57 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 14:50:39 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	execute_action(char *name, t_mem *mem)
{
	if (!ft_strcmp(name, "sa"))
		swap_a(mem);
	else if (!ft_strcmp(name, "sb"))
		swap_b(mem);
	else if (!ft_strcmp(name, "ss"))
		swap_b_a(mem);
	else if (!ft_strcmp(name, "pa"))
		push_a(mem);
	else if (!ft_strcmp(name, "pb"))
		push_b(mem);
	else if (!ft_strcmp(name, "ra"))
		rotate_a(mem);
	else if (!ft_strcmp(name, "rb"))
		rotate_b(mem);
	else if (!ft_strcmp(name, "rr"))
		rotate_b_a(mem);
	else if (!ft_strcmp(name, "rra"))
		rev_rotate_a(mem);
	else if (!ft_strcmp(name, "rrb"))
		rev_rotate_b(mem);
	else if (!ft_strcmp(name, "rrr"))
		rev_rotate_b_a(mem);
	else
		return (0);
	return (1);
}

void	read_instructions(t_mem *mem)
{
	char	instruction[4];
	int		index;
	int		prev_index;

	index = 0;
	while (index < 4)
	{
		prev_index = index;
		index += read(0, instruction + index, 1);
		if (prev_index == index)
			break ;
		if (instruction[prev_index] == '\n')
		{
			instruction[prev_index] = 0;
			if (!execute_action(instruction, mem))
				exit_error(mem);
			index = 0;
		}
	}
	if (index == 4)
		exit_error(mem);
}

int	main(int argc, char **argv)
{
	t_mem	mem;

	mem.a = NULL;
	mem.b = NULL;
	mem.print = 0;
	if (argc <= 1)
		return (0);
	read_args(argc, argv, &mem);
	read_instructions(&mem);
	if (is_ordered(&mem))
		ft_putstr("OK");
	else
		ft_putstr("KO");
	clear_all(&mem);
	return (0);
}
