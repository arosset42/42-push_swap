/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_select_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 19:11:52 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:39:36 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_algo_select_sort(t_plist *list_a, t_plist *list_b, int param)
{
	int		min;

	while (list_a->head->next)
	{
		min = ft_chr_min(list_a->head);
		while (list_a->head->value != min)
			ft_rra(list_a, param);
		ft_pb(list_a, list_b, param);
	}
	while (list_b->head)
	{
		ft_pa(list_a, list_b, param);
	}
}
