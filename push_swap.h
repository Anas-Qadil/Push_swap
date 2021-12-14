/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:23:53 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/14 02:18:21 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

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
void    pa_pb(t_stack_a **stack_b, t_stack_a **stack_a);

// starting ra
void    ra_rb(t_stack_a **stack);
void    rr(t_stack_a **stack_a, t_stack_a **stack_b);

// rra_rrb is in progress
void    rra_rrb(t_stack_a **stack);
void    rrr(t_stack_a **stack_a, t_stack_a **stack_b);

// working on building stack
void	build_stack(t_stack_a **head, int x);

//external functios
int	ft_atoi(const char *str);
int stack_size(t_stack_a **head);
void	pop_front(t_stack_a	**head);
void	pop_last(t_stack_a **head);

// sorting functions
void	sort_three(t_stack_a **head);
void	sort_four(t_stack_a **head, t_stack_a **headb);
void	sort_five(t_stack_a **head, t_stack_a **headb);

//sorting tools
int	sorted(t_stack_a **head);

// getting list info 
int get_min(t_stack_a **head);

#endif

// goal fo today is to creat all instruction