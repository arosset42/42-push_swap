/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 18:49:10 by arosset           #+#    #+#             */
/*   Updated: 2017/06/19 18:49:14 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

static	void 	ft_print_etat(t_node *a, t_node *b)
{
	while (a || b)
	{
		if (a && b)
		{
			ft_printf("| %12d | %12d |\n", a->value, b->value);
			a = a->next;
			b = b->next;
		}
		else if (a && !b)
		{
			ft_printf("| %12d | %12s |\n", a->value, "");
			a = a->next;
		}
		else
		{
			ft_printf("| %12s | %12d |\n", "", b->value);
			b = b->next;
		}
	}
}

void 	ft_print_op(t_plist *l_a, t_plist *l_b, char *line, int i)
{
	t_node	*a;
	t_node	*b;

	a = l_a->head;
	b = l_b->head;
	if (line)
	{
		ft_printf("-------------------------------\n");
		ft_printf("|       op = %4s             |\n", line);
	}
	else
		ft_printf("|------------INIT-------------|\n");
	ft_printf("-------------------------------\n");
	ft_print_etat(a, b);
	ft_printf("-------------------------------\n");
	ft_printf("| nombre de coup = %5d      |\n", i);
	ft_printf("-------------------------------\n\n");
}
