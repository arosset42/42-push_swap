/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:35:45 by arosset           #+#    #+#             */
/*   Updated: 2017/06/21 16:42:00 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static	int		if_inv_sort(t_node *head_l, t_node *next_l)
{
	while (next_l)
	{
		if (head_l->value < next_l->value)
			return (0);
		head_l = head_l->next;
		next_l = next_l->next;
	}
	return (1);
}

void			main_algo(t_plist *list_a, t_plist *list_b)
{
	int		min;

	min = ft_chr_min(list_a->head);
	if (if_inv_sort(list_a->head, list_a->head->next) && list_a->size_pile >= 4)
	{
		algo_up_down(list_a, list_b, 1);
	}
	else if (list_a->size_pile <= 4)
	{
		ft_algo_bubble(list_a, 1);
	}
	else
	{
		ft_algo_merge(list_a, list_b, 1);
	}
}
