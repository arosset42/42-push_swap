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
	int 	max;

	min = ft_chr_min(list_a->head);
	max = ft_chr_max(list_a->head);
	ft_printf("min = %d max = %d\nargc = %d\n", min, max, list_a->argc);
	if (list_a->argc <= 50)
	{
		ft_algo_one(list_a, list_b, min, max);
	}
	else
		ft_putstr("plus de 50 et jai pas de 2eme algo\n");
}

void 	ft_algo_one(t_plist *list_a, t_plist *list_b, int min, int max)
{
	int		stop;
	int		pivot;

	pivot = chr_pivot(list_a->head, min, max);
	ft_printf("pivot = %d\n", pivot);
	stop = 1;
	while ((!ft_verif_list(list_a->head, list_a->head->next) && stop) || list_a->head)
	{
		while (pivot != list_a->head->value)
		{
			if (list_a->head->value > pivot)
				ft_pb(list_a, list_b, 0);
			else
				ft_ra(list_a, 0);
				// sleep(2);
				// ft_putendl("\n=== list_b ===");
				// ft_print_pile(list_b);
				// ft_putendl("==== list_a ===");
				// ft_print_pile(list_a);
		}
		ft_putendl("fin algo");
		break;
	}
	ft_putendl("\n\n\n=== list_b ===");
	ft_print_pile(list_b);
	ft_putendl("==== list_a ===");
	ft_print_pile(list_a);
	ft_putendl("trie ou pas");
}
