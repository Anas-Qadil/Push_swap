/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:23:53 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/18 19:58:07 by aqadil           ###   ########.fr       */
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

typedef struct s_chunk
{
    int a;
    struct s_chunk *next;
}   t_chunk;

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
int	*sort_reference(t_stack_a **head);

// getting list info 
int get_min(t_stack_a **head);
int get_second_min(t_stack_a **head);
t_stack_a *first_element(t_stack_a **head);
t_stack_a   *get_last_node(t_stack_a **head);

//big sort
void	sort_hundred(t_stack_a **head, t_stack_a **headb);

//big sort tools
int *get_three_elements(t_stack_a **head, int index);
int *big_chunk(t_stack_a **head, int chunk);
int how_many_chunk(t_stack_a **head);
int get_pos(t_stack_a **head, int x);


#endif

// goal fo today is to creat all instruction