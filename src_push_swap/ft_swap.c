/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:38:19 by arosset           #+#    #+#             */
/*   Updated: 2017/05/20 17:38:28 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void 	ft_sa(t_plist *list_a)
{
	int		tmp;

	if (list_a->head && list_a->head->next)
	{
		tmp = list_a->head->value;
		list_a->head->value = list_a->head->next->value;
		list_a->head->next->value = tmp;
		ft_putendl_fd("sa", 1);
	}
	else
		ft_putendl_fd("a vide", 2);
}

void	ft_sb(t_plist *list_b)
{
	int		tmp;

	if (list_b->head && list_b->head->next)
	{
		tmp = list_b->head->value;
		list_b->head->value = list_b->head->next->value;
		list_b->head->next->value = tmp;
		ft_putendl_fd("sb", 1);
	}
	else
		ft_putendl_fd("b vide", 2);
}

void	 ft_ss(t_plist *list_a, t_plist *list_b)
{
	int		tmp;

	if (list_a->head && list_a->head->next)
	{
		tmp = list_a->head->value;
		list_a->head->value = list_a->head->next->value;
		list_a->head->next->value = tmp;
	}
	else
		ft_putendl_fd("a vide", 2);
	if (list_b->head && list_b->head->next)
	{
		tmp = list_b->head->value;
		list_b->head->value = list_b->head->next->value;
		list_b->head->next->value = tmp;
	}
	else
		ft_putendl_fd("b vide", 2);
	ft_putendl_fd("ss", 1);
}
