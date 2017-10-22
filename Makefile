# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: olkovale <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/04/20 19:35:21 by olkovale          #+#    #+#              #
#    Updated: 2017/09/28 18:43:10 by olkovale         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lemin

SRCS = $(wildcard srcs/*.c)
BINS = $(patsubst srcs/%.c, %.o, $(SRCS))
FLAGS = -g -Wall -Wextra -Werror

.PHONY: re all clean fclean

%.o : srcs/%.c
	gcc -Iincs -Ilibft/incs $(FLAGS) -c $<

all: libft $(NAME)

$(LIBFT):
	make -C ./libft

$(NAME): $(LIBFT) $(BINS)
	gcc -Iincs -Ilibft/incs $(FLAGS) $(LIBFT) $(BINS) lemin.c -o $(NAME)

clean:
	make clean -C ./libft
	/bin/rm -f $(BINS)

fclean: clean
	make fclean -C ./libft
	/bin/rm -f $(NAME)

re: fclean all
