# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssfar <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:32:47 by ssfar             #+#    #+#              #
#    Updated: 2018/11/07 19:08:10 by ssfar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all, clean, fclean, re

SRC_PATH = srcs

SRC_NAME = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ_NAME = $(SRC_NAME:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c $(SRC) -Iincludes
	ar rc $(NAME) $(OBJ_NAME)

clean:
	rm -f $(OBJ_NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
