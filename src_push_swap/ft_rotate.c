/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/25 15:28:54 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:38:07 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ft_ra(t_plist *list_a, int param)
{
	t_node	*elem;

	if (list_a->head && list_a->head->next)
	{
		elem = list_a->head;
		list_a->head = list_a->head->next;
		elem->next = NULL;
		list_a->tail->next = elem;
		list_a->tail = elem;
	}
	list_a->coup++;
	if (param)
		ft_putendl_fd("ra", 1);
}

void	ft_rb(t_plist *list_b, int param)
{
	t_node	*elem;

	if (list_b->head && list_b->head->next)
	{
		elem = list_b->head;
		list_b->head = list_b->head->next;
		elem->next = NULL;
		list_b->tail->next = elem;
		list_b->tail = elem;
	}
	list_b->coup++;
	if (param)
		ft_putendl_fd("rb", 1);
}

void	ft_rr(t_plist *list_a, t_plist *list_b, int param)
{
	t_node *elem;

	if (list_a->head && list_a->head->next)
	{
		elem = list_a->head;
		list_a->head = list_a->head->next;
		elem->next = NULL;
		list_a->tail->next = elem;
		list_a->tail = elem;
	}
	if (list_b->head && list_b->head->next)
	{
		elem = list_b->head;
		list_b->head = list_b->head->next;
		elem->next = NULL;
		list_b->tail->next = elem;
		list_b->tail = elem;
	}
	list_a->coup++;
	if (param)
		ft_putendl_fd("rr", 1);
}
