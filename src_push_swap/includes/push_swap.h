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
# include "../../libft/includes/libft.h"

typedef struct			s_node
{
	int					value;
	struct s_node		*next;
}						t_node;

typedef struct			s_plist
{
	int					argc;
	int					coup;
	struct s_node		*head;
	struct s_node		*tail;
}						t_plist;

void				ft_error(int error);
int					ft_nbelem(char **tab);

int					ft_check(char *str);
int					ft_check_digit(char *str);
int					ft_check_min_max(char *str);
void				ft_check_double(t_plist *lst, int value);

long long int		ft_atol(const char *str);

void 				ft_push_swap(int argc, char **argv);
void 				ft_push_swap_arg(int nbelem, char **tab);


void 				main_algo(t_plist *list_a, t_plist *list_b);

t_plist     		*ft_plistnew(void);
t_plist				*ft_plistadd(t_plist *lst, int value);
int 				ft_verif_list(t_node *head_l, t_node *next_l);

void    			ft_print_pile(t_plist *lst);

void 				ft_sa(t_plist *list_a);
void				ft_sb(t_plist *list_b);
void				ft_ss(t_plist *list_a, t_plist *list_b);

void 				ft_pa(t_plist *list_a, t_plist *list_b);
void 				ft_pb(t_plist *list_a, t_plist *list_b);

void 				ft_ra(t_plist *list_a);
void 				ft_rb(t_plist *list_b);
void 				ft_rr(t_plist *list_a, t_plist *list_b);

void 				ft_rra(t_plist *list_a);
void 				ft_rrb(t_plist *list_b);
void 				ft_rrr(t_plist *list_a, t_plist *list_b);

int					ft_chr_min(t_node *list);
int 				ft_chr_max(t_node *list);
int					chr_pivot(t_node *list, int min , int max);

void 				ft_algo_one(t_plist *list_a, t_plist *list_b, int min, int max);

#endif
