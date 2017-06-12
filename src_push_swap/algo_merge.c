/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   des_trucs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 15:44:29 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:23:05 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int		compt_elem_reverse(t_plist *node)
{
	t_node	*cursor;
	int		i;

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

static void		ft_merge_list(t_plist *l_a, t_plist *l_b, int param)
{
	while (l_b->head)
	{
		if (l_b->head->value < l_a->head->value &&
					l_b->head->value > l_a->tail->value)
			ft_pa(l_a, l_b, param);
		else if ((l_b->head->value < l_a->head->value &&
					l_a->head->value < l_a->tail->value)
					|| !l_a->head->next->value)
			ft_pa(l_a, l_b, param);
		else if (l_b->head->value > l_a->head->value &&
					l_a->head->value < l_a->tail->value &&
					l_b->head->value > l_a->tail->value)
			ft_pa(l_a, l_b, param);
		else
			ft_rra(l_a, param);
	}
}

void			ft_algo_merge(t_plist *l_a, t_plist *l_b, int param)
{
	int		waves_a;
	int		waves_b;

	waves_b = 0;
	while (!ft_verif_list(l_a->head, l_a->head->next))
	{
		waves_a = compt_elem(l_a);
		while (waves_a + 1 > waves_b)
		{
			ft_pb(l_a, l_b, param);
			waves_a = compt_elem(l_a);
			waves_b = compt_elem_reverse(l_b);
		}
		ft_merge_list(l_a, l_b, param);
		while (l_a->head->value > l_a->tail->value)
			ft_rra(l_a, param);
		waves_a = compt_elem(l_a);
		waves_b = compt_elem_reverse(l_b);
	}
}
