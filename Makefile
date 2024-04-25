# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 19:24:03 by rsaueia-          #+#    #+#              #
#    Updated: 2024/04/25 19:13:34 by rsaueia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = general_utils.c \
	  index_set.c \
	  initializer.c \
	  main.c \
	  operation_aux.c \
	  operations.c \
	  sorter.c

OBJS = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

PRINTF_PATH = printf

PRINTF_ARCHIVE = $(PRINTF_PATH)/libftprintf.a

$(NAME): $(PRINTF_ARCHIVE) $(NAME)
	ar rcs $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
