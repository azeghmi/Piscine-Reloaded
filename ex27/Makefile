# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: azeghmi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 15:11:59 by azeghmi           #+#    #+#              #
#    Updated: 2018/11/08 15:12:06 by azeghmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=	ft_display_file

SRCS=	main.c	

CFLAGS=	-Wall										\
		-Wextra										\
		-Werror

RM=		rm -f *.o

all:
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	@$(RM)

fclean: clean
	@$(RM) $(NAME)

re: fclean all