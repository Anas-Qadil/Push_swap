# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/09 02:32:46 by aqadil            #+#    #+#              #
#    Updated: 2021/12/10 14:41:15 by aqadil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		= push_swap
CC			= cc
SRCS		= push_swap.c tools.c sa_sb.c pa_pb.c ra_rb.c rra_rrb.c

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