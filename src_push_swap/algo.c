/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:35:45 by arosset           #+#    #+#             */
/*   Updated: 2017/05/20 17:36:05 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void 	ft_choice_algo(int	*pa, int argc)
{
	if (argc <= 50)
		ft_algo_one(pa, argc)
	else
		ft_putstr("plus de 50 et jai pas de 2eme algo\n");
}

void 	ft_algo_one(int *pa, int argc)
{
	

}
