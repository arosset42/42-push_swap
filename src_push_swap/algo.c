/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:35:45 by arosset           #+#    #+#             */
/*   Updated: 2017/05/20 17:36:05 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void 	main_algo(t_plist *list_a, t_plist *list_b)
{
	if (list_a->argc <= 50 && list_b->argc <= 50)
	{
		// ft_pb(list_a, list_b);
		// ft_pb(list_a, list_b);
		ft_algo_one(list_a, list_b);
	}
	else
		ft_putstr("plus de 50 et jai pas de 2eme algo\n");
}

void 	ft_algo_one(t_plist *list_a, t_plist *list_b)
{
	int		stop;

	stop = 1;
	while (!ft_verif_list(list_a->head, list_a->head->next) && stop)
	{
		ft_putstr("pas trie\n");
		ft_print_pile(list_b);
		ft_putendl("===");
		ft_print_pile(list_a);
		stop = 0;
		// if (list_a->head > list_a->head->next)
	}
	ft_putstr("trie");
}
