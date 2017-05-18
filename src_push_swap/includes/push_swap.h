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

typedef struct			s_dlist
{
	int					value;
	struct s_dlist		*next;
	struct s_dlist		*prev;
}						t_dlist;

void	ft_error(int error);
void 	ft_push_swap(int argc, char **argv);
void    ft_print_pile(int *pile, int argc);
int 	ft_check_digit(char *str);
int     ft_check_min_max(char *str);
long long int	ft_atol(const char *str);
int		ft_check_double(int *pa, int argc);

#endif
