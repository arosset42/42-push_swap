/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:35:45 by arosset           #+#    #+#             */
/*   Updated: 2017/05/27 10:56:34 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void 	main_algo(t_plist *list_a, t_plist *list_b)
{
	int		min;

	min = ft_chr_min(list_a->head);
	if (list_a->argc <= 5000)
	{
		ft_algo_one(list_a, list_b);
	}
	else
	{
		ft_putstr("plus de 50 et jai pas de 2eme algo\n");
	}
}

void 	ft_algo_one(t_plist *list_a, t_plist *list_b)
{
	int		min;

	while (list_a->head->next)
	{
		min = ft_chr_min(list_a->head);
		while (list_a->head->value != min)
			ft_rra(list_a, 1);
		ft_pb(list_a, list_b, 1);
	}
	while (list_b->head)
	{
		ft_pa(list_a, list_b, 1);
	}
	ft_print_pile(list_a);

}
