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

static int		compt_elem_reverse(t_plist *node)
{
	t_node 		*cursor;
	int			i;

	i = 0;
	if (!(cursor = node->head))
		return (i);
	while (cursor->next)
	{
		if (cursor->value < cursor->next->value)
			i++;
		cursor = cursor->next;
	}
	return (i);
}

static	int		compt_elem(t_plist *node)
{
	int		i;
	t_node	*cursor;

	cursor = node->head;
	i = 0;
	while (cursor->next)
	{
		if (cursor->value > cursor->next->value)
			i++;
		cursor = cursor->next;
	}
	return (i);
}

void 	ft_algo_one(t_plist *l_a, t_plist *l_b)
{
	int		waves_a;
	int		waves_b;

	waves_b = 0;
	while (!ft_verif_list(l_a->head, l_a->head->next))
	{
		waves_a = compt_elem(l_a);
		// ft_printf("waves_a = %d waves_b = %d\n", waves_a, waves_b);
		while (waves_a + 1 > waves_b)
		{
			ft_pb(l_a, l_b, 1);
			waves_a = compt_elem(l_a);
			waves_b = compt_elem_reverse(l_b);
		}

		while (l_b->head)
		{
			// ft_printf("test\n");
			if (l_b->head->value < l_a->head->value && l_b->head->value > l_a->tail->value)
			{
				ft_pa(l_a, l_b, 1);
			}
			else if ((l_b->head->value < l_a->head->value && l_a->head->value < l_a->tail->value) || !l_a->head->next->value)
			{
				ft_pa(l_a, l_b, 1);
			}
			else if (l_b->head->value > l_a->head->value && l_a->head->value < l_a->tail->value && l_b->head->value > l_a->tail->value)
			{
				ft_pa(l_a, l_b, 1);
			}
			else
				ft_rra(l_a, 1);

		}
		while (l_a->head->value > l_a->tail->value)
			ft_rra(l_a, 1);
		waves_a = compt_elem(l_a);
		waves_b = compt_elem_reverse(l_b);
	}
	// ft_print_pile(l_a);
}
