# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssfar <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 12:15:55 by ssfar             #+#    #+#              #
#    Updated: 2018/11/08 14:43:43 by ssfar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re
NAME = ft_display_file

SRC_PATH = src
SRC_NAME = main.c ft_putchar.c ft_putstr.c ft_read.c
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -Iinclude

OBJ_PATH = obj/
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

clean:
	rm -fv $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true

fclean: clean
	rm -fv $(NAME)

re: fclean all

norm:
	norminette $(SRC)
	norminette include
