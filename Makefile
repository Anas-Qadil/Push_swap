# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 02:32:46 by aqadil            #+#    #+#              #
#    Updated: 2021/12/17 19:19:41 by aqadil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= push_swap
CC			= cc
SRCS		= push_swap.c tools.c sa_sb.c pa_pb.c ra_rb.c rra_rrb.c build.c tools2.c small_sort.c sorting_tools.c tools3.c big_sort.c big_sort_tools.c

OBJS		= $(SRCS:%.c=%.o)


HEADER = push_swap.h

$(NAME): $(Name) $(OBJS) $(HEADER)
	$(CC) $(SRCS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BNS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all