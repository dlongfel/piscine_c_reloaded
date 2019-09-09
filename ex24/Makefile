# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlongfel <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/05 18:29:52 by dlongfel          #+#    #+#              #
#    Updated: 2019/09/06 16:04:49 by dlongfel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_swap.c ./srcs/ft_strlen.c

OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all:	libft.a

libft.a:	$(OBJECTS)
	ar rc libft.a $(OBJECTS)
$(OBJECTS): $(SOURCE) 
	gcc -c $(SOURCE) -I./includes

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f libft.a

re: fclean all
