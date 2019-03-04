# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: theogell <theogell@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/04 21:32:47 by theogell          #+#    #+#              #
#    Updated: 2018/04/04 21:37:23 by theogell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_display_file.c

OBJ = $(SRC:.c=.o)

$(NAME):
			@$(CC) $(CFLAGS) -c $(SRC)
			@$(CC) $(CLAGS) -o $(NAME) $(OBJ)

all: $(NAME)

clean:
			@rm -rf $(OBJ)

fclean: clean
			@rm -rf $(NAME)

re: fclean all
