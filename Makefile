# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdespres <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/13 21:46:29 by pdespres          #+#    #+#              #
#    Updated: 2017/11/10 11:26:02 by pdespres         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
REP1 = ./srcs/
REPH = ./includes/
SRC = ./*.c

all: $(NAME)

$(NAME):
	gcc -Wextra -Wall -Werror -c $(SRC)
	ar rc $(NAME) *.o
	ranlib $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
