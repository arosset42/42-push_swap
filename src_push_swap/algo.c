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

		ft_putendl("list_a =>");
		ft_print_pile(list_a);
		ft_putendl("list_b =>");
		ft_print_pile(list_b);
		ft_putendl("start test\n");
		ft_pb(list_a, list_b);
		ft_pb(list_a, list_b);
		ft_pa(list_a, list_b);
		ft_putendl("\nverif\nlist_a after");
		ft_print_pile(list_a);
		ft_putendl("list_b after");
		ft_print_pile(list_b);
	}
	else
		ft_putstr("plus de 50 et jai pas de 2eme algo\n");
}

// void 	ft_algo_one(t_plist *list_a, t_plist *list_b)
// {
//
//
// }
