/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/19 18:49:10 by arosset           #+#    #+#             */
/*   Updated: 2017/06/21 16:45:53 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

static	void	ft_print_etat(t_node *a, t_node *b)
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

void			ft_print_op(t_plist *l_a, t_plist *l_b, char *line, int i)
{
	t_node	*a;
	t_node	*b;

	a = l_a->head;
	b = l_b->head;
	if (line)
	{
		ft_printf("-------------------------------\n");
		ft_printf("|       op = \033[35m%4s\033[00m             |\n", line);
	}
	else
		ft_printf("-------------\033[35mINIT\033[00m--------------\n");
	ft_printf("|    \033[33m%6s%3s\033[00m |    \033[33m%6s%3s\033[00m |\n",
		"Pile_A", "", "Pile_B", "");
	ft_printf("-------------------------------\n");
	ft_print_etat(a, b);
	ft_printf("-------------------------------\n");
	ft_printf("| nombre de coup = \033[32m%5d\033[00m      |\n", i);
	ft_printf("-------------------------------\n\n");
}
