/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 13:50:02 by arosset           #+#    #+#             */
/*   Updated: 2017/06/19 21:03:14 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <locale.h>
# include <unistd.h>
# include <stdlib.h>
# include "../../libft/includes/libft.h"

typedef struct			s_node
{
	int					value;
	struct s_node		*next;
}						t_node;

typedef struct			s_plist
{
	int					size_pile;
	struct s_node		*head;
	struct s_node		*tail;
	int					v;
}						t_plist;

void					ft_error(void);
int						ft_nbelem(char **tab);

int						ft_check(char *str);
int						ft_check_digit(char *str);
int						ft_check_min_max(char *str);
void					ft_check_double(t_plist *lst, int value);

long long int			ft_atol(const char *str);

t_plist					*ft_plistnew(void);
t_plist					*ft_plistadd(t_plist *lst, int value);
int						ft_verif_list(t_node *head_l, t_node *next_l);

void					ft_print_pile(t_plist *lst);
void					ft_print_op(t_plist *l_a, t_plist *l_b, char *line,
							int i);

void					ft_sa(t_plist *list_a, int param);
void					ft_sb(t_plist *list_b, int param);
void					ft_ss(t_plist *list_a, t_plist *list_b, int param);

void					ft_pa(t_plist *list_a, t_plist *list_b, int param);
void					ft_pb(t_plist *list_a, t_plist *list_b, int param);

void					ft_ra(t_plist *list_a, int param);
void					ft_rb(t_plist *list_b, int param);
void					ft_rr(t_plist *list_a, t_plist *list_b, int param);

void					ft_rra(t_plist *list_a, int param);
void					ft_rrb(t_plist *list_b, int param);
void					ft_rrr(t_plist *list_a, t_plist *list_b, int param);

void					ft_start_verif(t_plist *l_a, t_plist *l_b);
#endif
