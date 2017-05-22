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

// void    ft_print_pile(int *pile, int argc)
// {
//     int i;
//
//     i = 1;
//     while (i < argc)
//     {
//         ft_printf("pile [%d] == %d\n", i, pile[i]);
//         i++;
//     }
// }
