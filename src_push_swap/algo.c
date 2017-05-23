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

void 	main_algo(t_plist *list_a, t_plist *list_b)
{
	if (list_a->argc <= 50)
		ft_algo_one(list_a, list_b)
	else
		ft_putstr("plus de 50 et jai pas de 2eme algo\n");
}

void 	ft_algo_one(t_plist *list_a, t_plist *list_b)
{
	

}
