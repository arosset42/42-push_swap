/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_bubble.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/05 15:41:27 by arosset           #+#    #+#             */
/*   Updated: 2017/06/05 15:46:20 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static int		limit_op_bb(t_plist *list)
{
	if (list->coup < OP_MAX)
		return (1);
	else
		return (-1);
}

void			ft_algo_bubble(t_plist *l_a, int param)
{
	int		min;

	min = ft_chr_min(l_a->head);
	while (!ft_verif_list(l_a->head, l_a->head->next) && limit_op_bb(l_a) != -1)
	{
		if (l_a->head->next->value == min ||
				!(l_a->head->value > l_a->head->next->value))
			ft_ra(l_a, param);
		else
			ft_sa(l_a, param);
	}
}
