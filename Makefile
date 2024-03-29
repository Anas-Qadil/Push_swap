# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 02:32:46 by aqadil            #+#    #+#              #
#    Updated: 2021/12/31 15:16:59 by aqadil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap
CC			= cc
FLAGS		= -Werror -Wextra -Wall
SRCS		= push_swap.c cleaner.c parse.c indexing.c looper.c rotator.c sorting.c stack.c tools.c sa_sb.c pa_pb.c ra_rb.c rra_rrb.c tools2.c small_sort.c sorting_tools.c tools3.c

OBJS		= push_swap.o cleaner.o parse.o indexing.o looper.o rotator.o sorting.o stack.o tools.o sa_sb.o pa_pb.o ra_rb.o rra_rrb.o tools2.o small_sort.o sorting_tools.o tools3.o

HEADER = push_swap.h

$(NAME): $(OBJS) $(HEADER)
	$(CC) ${FLAGS} $(OBJS) -o $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $<

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all