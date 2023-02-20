# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 15:51:38 by bkiziler          #+#    #+#              #
#    Updated: 2023/02/20 17:44:04 by bkiziler         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = minitalk.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC_FILES = client.c \
			serverc

OBJ_FILES = $(SRC_FILES:.c=.o)
HEADER = minitalk.h
RM = rm -rf
all:	$(NAME)
%.o: %.c $(HEADER)
		$(CC) $(CFLAGS) -c $<
$(NAME):	$(OBJ_FILES)
		ar rc $(NAME) $(OBJ_FILES)
clean:
	$(RM) $(OBJ_FILES)
fclean: clean
		$(RM) $(NAME)
re: fclean all
.PHONY: clean fclean re
