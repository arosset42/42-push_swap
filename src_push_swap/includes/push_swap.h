/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 13:50:02 by arosset           #+#    #+#             */
/*   Updated: 2017/05/17 16:02:07 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/includes/libft.h"

typedef struct			s_node
{
	int					value;
	struct s_node		*next;
}

typedef struct			s_plist
{
	int					argc;
	int					coup;
	struct s_node		*head;
	struct s_node		*tail;
}						t_plist;

void				ft_error(int error);
int					ft_check(char *str);
int					ft_check_digit(char *str);
int					ft_check_digit(char *str);

long long int		ft_atol(const char *str);

void 				ft_push_swap(int argc, char **argv);
void    			ft_print_pile(int *pile, int argc);

#endif
