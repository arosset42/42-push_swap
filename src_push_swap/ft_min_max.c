/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 13:36:54 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:29:14 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int		ft_chr_min(t_node *list)
{
	int		min;

	min = list->value;
	list = list->next;
	while (list)
	{
		if (min > list->value)
			min = list->value;
		list = list->next;
	}
	return (min);
}

int		ft_chr_max(t_node *list)
{
	int		max;

	max = list->value;
	list = list->next;
	while (list)
	{
		if (max < list->value)
			max = list->value;
		list = list->next;
	}
	return (max);
}

int		chr_pivot(t_node *list, int min, int max)
{
	int		i;
	int		ret;
	t_node	*save;

	i = 1;
	save = list;
	ret = (max - min) / 2;
	while (ret != list->value)
	{
		if (ret != list->value && list)
			list = list->next;
		if (!list)
		{
			ret++;
			list = save;
		}
	}
	return (ret);
}
