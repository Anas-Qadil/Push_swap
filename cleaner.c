/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:03:10 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/23 19:22:32 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clear_all(t_mem *mem)
{
	ft_free_list(&(mem->a));
	ft_free_list(&(mem->b));
}

void	exit_error(t_mem *mem)
{
	ft_puterr("Error");
	clear_all(mem);
	exit(EXIT_FAILURE);
}
