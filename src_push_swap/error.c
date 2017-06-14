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
	if (error)
		ft_putstr_fd("Error\n", 2);
	exit(EXIT_FAILURE);
}

int		ft_nbelem(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
