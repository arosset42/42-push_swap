/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 14:23:02 by arosset           #+#    #+#             */
/*   Updated: 2017/06/10 14:25:12 by arosset          ###   ########.fr       */
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

void	ft_print_pile(t_plist *lst)
{
	t_node	*elem;

	if (lst)
	{
		elem = lst->head;
		if (lst->head == NULL)
			ft_putendl("vide");
		while (elem)
		{
			ft_printf("value = %d\n", elem->value);
			elem = elem->next;
		}
	}
}

int		ft_nbelem(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
