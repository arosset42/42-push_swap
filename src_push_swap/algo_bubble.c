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

void	ft_algo_bubble(t_plist *l_a, int min)
{
	while (!ft_verif_list(l_a->head, l_a->head->next))
	{
		if (l_a->head->next->value == min ||
				!(l_a->head->value > l_a->head->next->value))
			ft_ra(l_a, 1);
		else
			ft_sa(l_a, 1);
	}
}
