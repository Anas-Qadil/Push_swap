/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:02:47 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/30 21:32:15 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	read_args(int argc, char **argv, t_mem *mem)
{
	int	j;
	int	i;
	int	prev_space;

	i = 1;
	prev_space = 1;
	while (i < argc)
	{
		prev_space = 1;
		j = -1;
		while (argv[i][++j])
		{
			if (argv[i][j] != '+' && argv[i][j] != '-' && argv[i][j] != ' '
				&& !ft_isdigit(argv[i][j]))
				exit_error(mem);
			if (prev_space == 1 && argv[i][j] != ' ')
			{
				push_init(&(mem->a), ft_atoi(argv[i] + j, mem), -1, mem);
				prev_space = 0;
			}
			if (argv[i][j] == ' ')
				prev_space = 1;
		}
		i++;
	}
}
