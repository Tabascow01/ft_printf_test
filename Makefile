# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchemakh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/16 04:54:30 by mchemakh          #+#    #+#              #
#    Updated: 2017/05/19 01:26:17 by mchemakh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf_test
CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRC = main.c 
SRCS_ANNEXE = ../ft_printf_rendu/ft_printf.c
OBJ = main.o
OBJ_ANNEXE = ../ft_printf_rendu/ft_printf.o


LIB_PRINTF = -lftprintf
LIB_PATH = ../ft_printf_rendu/
INCLUDE_PRINTF = ../ft_printf_rendu/includes/

all: $(NAME)

$(NAME):
	@$(CC) $(CFLAGS) -I $(INCLUDE_PRINTF) -g $(SRC) -L$(LIB_PATH) $(LIB_PRINTF) -o $(NAME)
	@echo "[$(NAME)]\t\t\t\t\t\033[1;32m[Created]\033[0m"

clean: 
	@/bin/rm -f $(OBJ)
	@echo "[$(OBJ)]\t\t\t\t\t\t\033[1;31m[Deleted]\033[0m"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "[$(NAME)]\t\t\t\t\t\033[1;31m[Deleted]\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
