# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aldiaz-c <aldiaz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 16:22:21 by aldiaz-c          #+#    #+#              #
#    Updated: 2022/11/08 16:22:21 by aldiaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC =  ft_printf.c \
			ft_print_hexadecimal.c \
			ft_print_utils.c \
			ft_printf.c \
			ft_putnbr_base.c \

OBJ=$(SRC:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	ar -crs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
