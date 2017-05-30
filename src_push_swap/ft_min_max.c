/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/26 13:36:54 by arosset           #+#    #+#             */
/*   Updated: 2017/05/26 13:37:10 by arosset          ###   ########.fr       */
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

int 	ft_chr_max(t_node *list)
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

int		chr_pivot(t_plist *list, int min , int max)
{
	int 	ret;
	int		tmp;

	tmp = max - min;
	while (!ret)
	{
		while (list->head && list->head->value != tmp)
				list = list->head->next;
	}
}
