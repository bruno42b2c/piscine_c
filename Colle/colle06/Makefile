# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbenyahi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/02/02 09:42:51 by mbenyahi          #+#    #+#              #
#    Updated: 2016/02/02 14:06:48 by mbenyahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = eval_expr

SRC = main.c trait_chaine.c init_chaine.c operation.c libft.c

HEADER = header.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	/bin/rm -f main.o

fclean: clean
	/bin/rm -f $(NAME)
