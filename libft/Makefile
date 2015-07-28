# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avallete <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/18 13:18:20 by avallete          #+#    #+#              #
#    Updated: 2015/07/28 21:21:46 by jabadie          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem_in

SRC_PATH = ./src/
OBJ_PATH = ./obj/
INC_PATH = -I ./includes/

SRC_NAME = 

OBJ_NAME = $(SRC_NAME:.c=.o)


SRC = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

CFLAGS = -Wall -Wextra -Werror
CC = gcc

RED = \033[30;41m
GREEN = \033[32m
CYAN = \033[36m
ORANGE = \033[33m
NC = \033[0m

all : $(NAME)

$(NAME) : $(OBJ)
	@echo "${GREEN}Compile $(NAME) with $(CFLAGS)${NC}";
	@echo "${LBLUE}ar rc $(NAME)${NC}"
	@ar rc $(NAME) $(OBJ)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	@echo "${ORANGE}Create bynary $(NAME) : $@ with $<${NC}";
	@$(CC) $(CFLAGS) $(INC_PATH) -o $@ -c $<

clean:
	@echo "${RED} Delete OBJ files ${NC}"
	@rm -rf $(OBJ_PATH)

fclean: clean
	@echo "${RED} Delete $(NAME) file ${NC}"
	@rm -rf $(NAME)

re: fclean all clean

.PHONY: all clean fclean re
