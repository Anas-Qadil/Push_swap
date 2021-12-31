/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 02:23:53 by aqadil            #+#    #+#             */
/*   Updated: 2021/12/31 15:10:41 by aqadil           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				index;
	int				keep;
	struct s_list	*next;
	struct s_list	*next_sort;
}					t_list;

typedef struct s_mem
{
	t_list			*a;
	t_list			*b;
	int				max;
	int				big;
	int				size;
	int				group_cnt;
	int				group_sz;
	int				print;
	t_list			*temp;
}					t_mem;

void	swap_a(t_mem *mem);
void	swap_b(t_mem *mem);
void	swap_b_a(t_mem *mem);
void	push_b(t_mem *mem);
void	push_a(t_mem *mem);
void	rev_rotate_a(t_mem *mem);
void	rev_rotate_b(t_mem *mem);
void	rev_rotate_b_a(t_mem *mem);
void	rotate_a(t_mem *mem);
void	rotate_b(t_mem *mem);
void	rotate_b_a(t_mem *mem);

int		ft_isdigit(int c);
int		ft_atoi(char *str, t_mem *mem);
int		ft_abs(int a);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
int		ft_strcmp(const char *s1, const char *s2);
void	ft_swap_list(t_list **prevnext, t_list *last);
void	ft_list_sort(t_list **begin_list);
void	ft_putstr(char *str);
void	ft_puterr(char *str);
void	ft_free_list(t_list **list);
int		list_size(t_list *l);
t_list	*get_last(t_list *l);
int		list_contains_value(t_list *l, int value);
int		is_ordered(t_mem *m);

void	read_args(int argc, char **argv, t_mem *mem);

t_list	*get_node_from_array(int arr[], t_mem *mem, int elem);
t_list	*get_smallest_node(t_mem *mem, int elem);
t_list	*get_first_element(t_mem *mem);
void	five_sort(t_mem *mem);
void	sort_three(t_mem *mem);
void	clear_all(t_mem *mem);
void	exit_error(t_mem *mem);
void	push_init(t_list **stack, int value, int tag, t_mem *mem);
void	swap_private(t_list **stack);
void	push_top_x1_on_x2(t_list **x1, t_list **x2);
void	put_top_to_bottom(t_list **x);
void	put_bottom_to_top(t_list **x);
int		has_tag(t_list *list, int tag);
void	prepare_five(t_mem *mem);
void	tag_list(t_list **start, t_mem *mem);
int		loop_list(t_list *list, t_list *start, int set);
int		find_biggest_loop(t_list *start, int set);
void	double_rotate(t_mem *mem, int *rot_a, int *rot_b);
void	rotate(t_mem *mem, int rot_a, int rot_b);
void	init_resolve(t_mem *mem);
int		distance_to_top(t_list *a, int tag);
int		distance_to_tag(int tag, int size);
t_list	*closest_in_group(t_list *list, int cur_group, int group_sz);
int		can_swap(t_list *list);
int		insert_distance(t_list *list, int t, int size);
void	calculate_b_rotation(t_mem *m, int max_dist, int *rot_a, int *rot_b);
void	populate_b(t_mem *m);
void	resolve(t_mem *m, int cur_group);

#endif
