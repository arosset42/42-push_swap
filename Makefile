# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arosset <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/12 21:54:32 by arosset           #+#    #+#              #
#    Updated: 2017/06/12 21:54:33 by arosset          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PS_TARGET		= push_swap
CH_TARGET		= checker

CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror

LIB_PATH		= 	./libft/
LIB				=	./libft/libft.a
LIB_LINK		=	./libft/libft.a

CH_INC_PATH		= 	./src_checker/includes
CH_SRC_PATH		=	./src_checker
CH_SRC_NAME 	= 	checker.c checker_read.c ft_list.c error.c ft_check_argv.c \
					ft_atol.c ft_swap.c ft_push.c ft_rotate.c ft_reverse_rotate.c\
					ft_print.c 

PS_INC_PATH		= 	./src_push_swap/includes
PS_SRC_PATH		=	./src_push_swap
PS_SRC_NAME 	= 	push_swap.c ft_list.c error.c ft_check_argv.c ft_atol.c \
					algo.c ft_swap.c ft_push.c ft_rotate.c ft_reverse_rotate.c \
					ft_min_max.c algo_bubble.c algo_select_sort.c algo_merge.c

PS_OBJ_PATH		=	./obj_ps
CH_OBJ_PATH		=	./obj_ch

PS_OBJ_NAME	 	=	$(PS_SRC_NAME:.c=.o)
CH_OBJ_NAME		=	$(CH_SRC_NAME:.c=.o)


PS_INC_NAME 	= 	push_swap.h
CH_INC_NAME		=	checker.h

CH_OBJ			= $(addprefix $(CH_OBJ_PATH)/,$(CH_OBJ_NAME))
PS_OBJ 			= $(addprefix $(PS_OBJ_PATH)/,$(PS_OBJ_NAME))

# COLORS
RESET			=	"\033[00m"
RED				=	"\033[31m"
GREEN			=	"\033[32m"
YELLOW			=	"\033[33m"
BLUE			= 	"\033[34m"
PURPLE			=	"\033[35m"

# MESSAGE
SUCCESS			=	$(GREEN)SUCCESS$(RESET)
OK				=	$(PURPLE)OK$(RESET)
DELETE			=	$(RED)DELETE$(RESET)
DELETE_LIB		=	$(RED)DELETE LIB$(RESET)
TEST 			= 	$(YELLOW)DEBUT TEST$(RESET)


all: $(LIB) $(PS_TARGET) $(CH_TARGET)

$(CH_TARGET): $(CH_OBJ)
	@$(CC) $(LIB_LINK) $(FLAGS) $(CH_OBJ)  -o $@
	@echo $(RED)"Exec =>"$(YELLOW) $(CH_TARGET) : $(SUCCESS)

$(CH_OBJ_PATH)/%.o: $(CH_SRC_PATH)/%.c
	@mkdir $(CH_OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<
	@echo "Obj" [ $< ] $(OK)

$(PS_TARGET): $(PS_OBJ)
	@$(CC) $(LIB_LINK) $(FLAGS) $(PS_OBJ)  -o $@
	@echo $(RED)"Exec =>"$(YELLOW) $(PS_TARGET) : $(SUCCESS)

$(LIB):
	@make -C $(LIB_PATH)

$(PS_OBJ_PATH)/%.o: $(PS_SRC_PATH)/%.c
	@mkdir $(PS_OBJ_PATH) 2> /dev/null || true
	@$(CC) -o $@ -c $<
	@echo "Obj" [ $< ] $(OK)

clean:
	@rm -rf $(CH_OBJ) $(CH_OBJ_PATH)
	@echo $(DELETE) : $(CH_OBJ) $(CH_OBJ_PATH)
	@rm -rf $(PS_OBJ) $(PS_OBJ_PATH)
	@echo $(DELETE) : $(PS_OBJ) $(PS_OBJ_PATH)
	@make -C $(LIB_PATH) clean
	@echo $(DELETE_LIB) : Obj_Lib

fclean: clean
	@rm -rf $(CH_TARGET)
	@echo $(DELETE) : $(CH_TARGET)
	@rm -rf $(PS_TARGET)
	@echo $(DELETE) : $(PS_TARGET)
	#@make -C $(LIB_PATH) fclean
	#@echo $(DELETE_LIB) : Lib

re: fclean all

test: all
	./push_swap 5 32 1
#ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
