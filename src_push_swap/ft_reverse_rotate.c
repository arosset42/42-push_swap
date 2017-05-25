/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 15:49:12 by arosset           #+#    #+#             */
/*   Updated: 2017/05/25 15:49:25 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void 	ft_rra(t_plist *list_a)
{
	t_node 	*elem;

	if (list_a->head && list_a->head->next)
	{
		elem = list_a->head;
		while (elem->next != list_a->tail)
			elem = elem->next;
		elem->next->next = list_a->head;
		list_a->head = elem->next;
		elem->next = NULL;
		list_a->tail = elem;
	}
	ft_putendl_fd("rra", 1);
}

void 	ft_rrb(t_plist *list_b)
{
	t_node 	*elem;

	if (list_b->head && list_b->head->next)
	{
		elem = list_b->head;
		while (elem->next != list_b->tail)
			elem = elem->next;
		elem->next->next = list_b->head;
		list_b->head = elem->next;
		elem->next = NULL;
		list_b->tail = elem;
	}
	ft_putendl_fd("rrb", 1);
}

void 	ft_rrr(t_plist *list_a, t_plist *list_b)
{
	t_node 	*elem;

	if (list_a->head && list_a->head->next)
	{
		elem = list_a->head;
		while (elem->next != list_a->tail)
			elem = elem->next;
		elem->next->next = list_a->head;
		list_a->head = elem->next;
		elem->next = NULL;
		list_a->tail = elem;
	}
	if (list_b->head && list_b->head->next)
	{
		elem = list_b->head;
		while (elem->next != list_b->tail)
			elem = elem->next;
		elem->next->next = list_b->head;
		list_b->head = elem->next;
		elem->next = NULL;
		list_b->tail = elem;
	}
	ft_putendl_fd("rrr", 1);
}
