/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:05:13 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:27:18 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

t_plist		*ft_plistnew(void)
{
	t_plist	*new;

	if (!(new = (t_plist*)malloc(sizeof(t_plist))))
		return (NULL);
	if (new != NULL)
	{
		new->coup = 0;
		new->size_pile = 0;
		new->head = NULL;
		new->tail = NULL;
	}
	return (new);
}

t_plist		*ft_plistadd(t_plist *lst, int value)
{
	t_node	*new;

	if (lst != NULL)
	{
		if ((new = (t_node*)malloc(sizeof(t_node))) != NULL)
		{
			new->value = value;
			new->next = NULL;
			if (lst->tail == NULL)
			{
				lst->head = new;
				lst->tail = new;
			}
			else
			{
				lst->tail->next = new;
				lst->tail = new;
			}
		}
		lst->size_pile++;
	}
	return (lst);
}

int			verif_l(t_node *head_l, t_node *next_l)
{
	while (next_l)
	{
		if (head_l->value > next_l->value)
			return (0);
		head_l = head_l->next;
		next_l = next_l->next;
	}
	return (1);
}
