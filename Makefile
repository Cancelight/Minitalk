# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 15:51:38 by bkiziler          #+#    #+#              #
#    Updated: 2023/02/25 20:50:39 by bkiziler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server.c client.c
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
PRINTF = ./ft_printf/libftprintf.a
SRC = ft_atoi.c

all:	$(NAME)

$(NAME) : $(PRINTF)
	$(CC) $(CFLAGS) client.c $(PRINTF) $(SRC) -o client
	$(CC) $(CFLAGS) server.c $(PRINTF) $(SRC) -o server

$(PRINTF):
	@make -C ./ft_printf

clean:
	@make -C ./ft_printf clean

fclean: clean
	$(RM) $(NAME)
	@make -C ./ft_printf fclean

re: fclean all

.PHONY: clean fclean re
