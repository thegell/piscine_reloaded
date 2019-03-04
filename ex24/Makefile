# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theogell <theogell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 16:47:37 by theogell          #+#    #+#              #
#    Updated: 2018/04/04 17:02:55 by theogell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -c -Wall -Werror -Wextra
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
		srcs/ft_swap.c
INC_DIR = includes/


all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(SRC) -I $(INC_DIR)
		ar rc $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
		ranlib $(NAME)

clean:
		rm -rf ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o 

fclean: clean
		rm -rf $(NAME)

re: fclean all