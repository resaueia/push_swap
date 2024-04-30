# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rsaueia- <rsaueia-@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/17 19:24:03 by rsaueia-          #+#    #+#              #
#    Updated: 2024/04/30 18:17:36 by rsaueia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = general_utils.c \
	  index_set.c \
	  initializer.c \
	  main.c \
	  operation_aux.c \
	  swap_ops.c \
	  sorter.c \
	  push_ops.c \
	  reverse_ops.c \
	  revrot_ops.c

OBJS = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

PRINTF_PATH = printf

PRINTF_ARCHIVE = $(PRINTF_PATH)/libftprintf.a

$(NAME): $(PRINTF_ARCHIVE) $(NAME)
	ar rcs $(NAME)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF_ARCHIVE) -o $(NAME)

$(PRINTF_ARCHIVE):
	make -C $(PRINTF_PATH)

clean:
	make -C $(PRINTF_PATH) clean
	$(RM) $(OBJS)

fclean: clean
	make -C $(PRINTF_PATH) fclean
	$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
