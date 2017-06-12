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

NAME			=	checker

CC				=	gcc
FLAGS			=	-Wall -Wextra -Werror

LIB_PATH		= 	../libft/
LIB				=	../libft/libft.a
LIB_LINK		=

SRC				=	checker.c checker_read.c ft_list.c error.c ft_check_argv.c \
					ft_atol.c ft_swap.c ft_push.c ft_rotate.c ft_reverse_rotate.c


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
OK				=	$(PURPLE)OK$(RESET)
DELETE			=	$(RED)DELETE$(RESET)
DELETE_LIB		=	$(RED)DELETE LIB$(RESET)
TEST 			= 	$(YELLOW)DEBUT TEST$(RESET)

all : $(NAME)

$(NAME) : $(LIB) $(OBJS)
	@$(CC) $(LIB_LINK) $^ -o $@
	@echo "Exec =>"$(YELLOW) $(NAME) : $(SUCCESS)

$(LIB):
	@make -C $(LIB_PATH)

%.o: %.c
	@$(CC) $(FLAGS) -o $@ -c $<
	@echo "Obj" [ $< ] $(OK)

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

test : all
	@echo $(TEST)
	@./push_swap 9 1 2 5 6 7 3 4 8 0  | cat -e

correction : all
	@echo $(TEST)
	@ARG="9 8 7 6 5 4 3 2 1 0"; ./push_swap $ARG | wc -l

testtri : all
	@echo $(YELLOW)DEBUT VERIF DEJA TRIE$(RESET)
	@./push_swap 1 2 3 4 5 6 | cat -e

norme :
	norminette $(SRC) includes/push_swap.h

save :
	make fclean && git add . && git commit -m "save" && git push
