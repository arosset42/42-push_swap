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

void 	ft_pa(t_plist *list_a, t_plist *list_b, int param)
{
	t_node		*elem;

	if (list_b->head)
	{
			elem = list_b->head;
			if (!list_a->head)
			{
				list_b->head = elem->next;
				elem->next = NULL;
				list_a->head = elem;
				list_a->tail = elem;
			}
			else
			{
				list_b->head = elem->next;
				elem->next = list_a->head;
				list_a->head = elem;
			}
	}
	if (param)
		ft_putendl_fd("pa", 1);
}

void 	ft_pb(t_plist *list_a, t_plist *list_b, int param)
{
	t_node	*elem;

	if (list_a->head != NULL)
	{
		elem = list_a->head;
		if (list_b->head == NULL)
		{
			list_a->head = elem->next;
			elem->next = NULL;
			list_b->head = elem;
			list_b->tail = elem;
		}
		else
		{
			list_a->head = elem->next;
			elem->next = list_b->head;
			list_b->head = elem;
		}
	}
	if (param)
		ft_putendl_fd("pb", 1);
}
