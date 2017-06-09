/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 14:23:02 by arosset           #+#    #+#             */
/*   Updated: 2017/05/18 14:24:26 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_error(int error)
{
    if (error == 1)
        ft_putstr_fd("Error aucun argument\n", 2);
    else if (error == 2)
        ft_putstr_fd("Error no digit\n", 2);
	else if (error == 3)
		ft_putstr_fd("Error double argv\n", 2);
	else if (error == 4)
		ft_putstr_fd("erreur depassement int\n", 2);
    else
        ft_putstr_fd("Error sans nom\n", 2);
    exit(EXIT_FAILURE);
}

void    ft_print_pile(t_plist *lst)
{
	t_node	*elem;

	if (lst)
	{
		elem = lst->head;
		while (elem)
		{
			ft_printf("value = %d\n", elem->value);
			elem = elem->next;
		}
	}
}

void 	ft_print_d_pile(t_plist *lst_a, t_plist *lst_b)
{
	t_node *a;
	t_node	*b;

	if (lst_a || lst_b)
	{
		a = lst_a->head;
		b = lst_b->head;
		while (a || b)
		{
			ft_printf("Value A = %d\t\tValue B = %d\n", a->value, b->value);
			a = a->next;
			b = b->next;
		}
	}
}
