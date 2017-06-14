/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:35:45 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:35:23 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	main_algo(t_plist *list_a, t_plist *list_b)
{
	int		min;

	min = ft_chr_min(list_a->head);
	if (list_a->size_pile <= 4)
	{
		ft_algo_bubble(list_a, 1);
	}
	else
	{
		ft_algo_merge(list_a, list_b, 1);
	}
}
