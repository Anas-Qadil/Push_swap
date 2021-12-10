/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:23:53 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/10 15:20:14 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_a
{
    int x;
    struct s_stack_a *next;
    
} t_stack_a;

t_stack_a	*ft_lstnew_a(int x);
void	ft_lstclear_a(t_stack_a **lst);
// sa is in progress
void    sa(t_stack_a **stack);

// pa_pb is in prgress
void    pa_pb(t_stack_a **stack_a, t_stack_a **stack_b);

// starting ra
void    ra_rb(t_stack_a **stack);
void    rr(t_stack_a **stack_a, t_stack_a **stack_b);

// rra_rrb is in progress
void    rra_rrb(t_stack_a **stack);
void    rrr(t_stack_a **stack_a, t_stack_a **stack_b);
#endif

// goal fo today is to creat all instruction