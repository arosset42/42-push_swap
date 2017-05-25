/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:38:32 by arosset           #+#    #+#             */
/*   Updated: 2017/05/20 17:38:41 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void 	ft_pa(t_plist *list_a, t_plist *list_b)
{
	if (list_b->head)
	{
		list_a = ft_plistadd(list_a, list_b->head->value);
		list_b->head = list_b->head->next;
	}
	ft_putendl_fd("pa", 1);
}

void 	ft_pb(t_plist *list_a, t_plist *list_b)
{
	if (list_a->head)
	{
		list_b = ft_plistadd(list_b, list_a->head->value);
		list_a->head = list_a->head->next;
	}
	ft_putendl_fd("pb", 1);
}
