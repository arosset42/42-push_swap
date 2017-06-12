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

NAME	= push_swap

all: $(NAME)

$(NAME):
	make -C src_checker
	cp ./src_checker/checker ./
	make -C src_push_swap
	cp ./src_push_swap/push_swap ./

clean:
	rm -rf checker push_swap

re: clean all

#ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker $ARG
