# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aqadil <aqadil@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 12:19:24 by aqadil            #+#    #+#              #
#    Updated: 2021/12/31 15:17:15 by aqadil           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = checker
CC = cc
FLAGS = -Werror -Wextra -Wall

HEADER = checker.h

SRC = checker.c
OBJ = checker.o

SRC_COMMON = 	../pa_pb.c \
				../ra_rb.c \
				../rra_rrb.c \
				../sa_sb.c \
				../parse.c \
				../cleaner.c \
				../stack.c \
				../tools.c \
				../tools2.c \
				../tools3.c

OBJS_COMMON	= pa_pb.o \
				ra_rb.o \
				rra_rrb.o \
				sa_sb.o \
				parse.o \
				cleaner.o \
				stack.o \
				tools.o \
				tools2.o \
				tools3.o

$(NAME): $(OBJ) $(HEADER)
		${CC} ${FLAGS} -c $(SRC_COMMON)
		${CC} ${FLAGS} $(SRC) -o $(NAME) $(OBJS_COMMON)

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all