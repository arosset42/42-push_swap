/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_up_down.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/21 15:51:59 by arosset           #+#    #+#             */
/*   Updated: 2017/06/21 16:43:10 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static	void	loop(t_plist *a, t_plist *b, int min, int param)
{
	if (b->head && b->head->value < a->head->value &&
		a->head->next->value != min)
	{
		while (b->head && b->head->value < a->head->value &&
			a->head->next->value != min)
		{
			ft_pa(a, b, param);
			ft_ra(a, param);
		}
	}
	else if (b->head && b->head->value > a->head->value && a->head->next->value
		&& a->head->next->value != min && a->head->value > a->head->next->value)
		ft_pb(a, b, param);
	else if (a->head->next && a->head->next->value != min &&
		a->head->value > a->head->next->value)
	{
		if (!b->head || a->head->value > b->head->value)
			ft_pb(a, b, param);
		else
			ft_ra(a, param);
	}
	else
		ft_ra(a, param);
}

static	void	ran_b(t_plist *a, t_plist *b, int param)
{
	while (b->head)
	{
		ft_pa(a, b, param);
		ft_ra(a, param);
	}
}

static	void	ft_up(t_plist *a, t_plist *b, int min, int param)
{
	if (a->head->value == min)
		ft_ra(a, param);
	while (a->head->value != min)
		loop(a, b, min, param);
	ran_b(a, b, param);
	while (a->head->value != min)
		ft_ra(a, param);
}

void			algo_up_down(t_plist *a, t_plist *b, int param)
{
	int		min;

	min = ft_chr_min(a->head);
	while (!verif_l(a->head, a->head->next) && !b->head)
		ft_up(a, b, min, param);
}
