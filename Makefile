# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 18:35:17 by skroboth          #+#    #+#              #
#    Updated: 2024/10/10 16:23:46 by skroboth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_printf.c ft_printf_putchar.c ft_printf_putstr.c ft_printf_putint.c \
ft_printf_putuint.c ft_printf_puthex.c ft_printf_putptr.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

rebonus: fclean all
