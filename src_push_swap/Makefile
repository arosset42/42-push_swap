# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arosset <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/17 15:12:08 by arosset           #+#    #+#              #
#    Updated: 2017/05/17 15:12:11 by arosset          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror

LIB_PATH		=	libft
LIB				=	$(LIB_PATH)/libft.a
LIB_LINK		=	-Llibft -lft

SRC				=	push_swap.c
HEADER 			=	includes/push_swap.h

OBJS			=	$(SRC:.c=.o)

# COLORS
RESET			=	"\033[00m"
RED				=	"\033[31m"
GREEN			=	"\033[32m"
YELLOW			=	"\033[33m"
BLUE			= 	"\033[34m"
PURPLE			=	"\033[35m"

# MESSAGE
SUCCESS			=	$(GREEN)SUCCESS$(RESET)
OK				=	$(PURPLE) OK $(RESET)
DELETE			=	$(RED) DELETE $(RESET)
DELETE_LIB		=	$(RED) DELETE LIB$(RESET)
all : $(NAME)

test :
	@echo $(OK)

$(NAME) : $(LIB) $(OBJS)
	@$(CC) $(LIB_LINK) $^ -o $@
	@echo "Exec =>"$(YELLOW) $(NAME) : $(SUCCESS)

$(LIB):
	@make -C $(LIB_PATH)

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<
	@echo "Obj" [ $< ] $(OK)
	@echo "\n"

clean :
	@make -C $(LIB_PATH) clean
	@echo $(DELETE_LIB) : Obj $(LIB)
	@rm -f $(OBJS)
	@echo $(DELETE) : $(OBJS)

fclean : clean
	@echo "\n"
#	@make -C $(LIB_PATH) fclean
#	ß@echo $(DELETE_LIB) : $(LIB)
	@rm -f $(NAME)
	@@echo $(DELETE) : $(NAME)


re : fclean all

norme :
	norminette $(SRC) includes/push_swap.h
