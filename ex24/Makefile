# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbaltaza <dbaltaza@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/15 19:12:48 by dbaltaza          #+#    #+#              #
#    Updated: 2025/10/15 19:12:54 by dbaltaza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

T_LIB = libft.a
INC_D = ./includes/
SRC_D = ./srcs/
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
HEADERS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

.PHONY: all clean fclean re

all: libft.a

libft.a: ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
	ar rc ${T_LIB} ./includes/ft_putchar.o ./includes/ft_putstr.o ./includes/ft_strcmp.o ./includes/ft_strlen.o ./includes/ft_swap.o

ft_putchar.o:
	gcc -c ${SRC_D}ft_putchar.c
	mv ft_putchar.o ./includes

ft_putstr.o:
	gcc -c ${SRC_D}ft_putstr.c
	mv ft_putstr.o ./includes
	
ft_strcmp.o:
	gcc -c ${SRC_D}ft_strcmp.c
	mv ft_strcmp.o ./includes
	
ft_strlen.o:
	gcc -c ${SRC_D}ft_strlen.c
	mv ft_strlen.o ./includes
	
ft_swap.o:
	gcc -c ${SRC_D}ft_swap.c
	mv ft_swap.o ./includes

clean:
	rm -f ./includes/ft_putchar.o ./includes/ft_putstr.o ./includes/ft_strcmp.o ./includes/ft_strlen.o ./includes/ft_swap.o

fclean: clean
	rm -f ${T_LIB}

re: fclean all