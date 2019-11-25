# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 20:36:57 by azeghmi           #+#    #+#              #
#    Updated: 2018/11/07 20:37:00 by azeghmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	libft.a 

SRCS=	srcs/ft_putchar.c							\
		srcs/ft_putstr.c 							\
		srcs/ft_strcmp.c 							\
		srcs/ft_strlen.c 							\
		srcs/ft_swap.c 								

PTO=	ft_putchar.o								\
		ft_putstr.o									\
		ft_strcmp.o									\
		ft_strlen.o									\
		ft_swap.o									

HEAD=	./includes

CFLAGS=	-Wall										\
		-Wextra										\
		-Werror										\
		-c

RM=		rm -f

all:
	@gcc $(CFLAGS) -I $(HEAD) $(SRCS)
	@ar -rv $(NAME) $(PTO)

clean:
	@$(RM) $(PTO)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
