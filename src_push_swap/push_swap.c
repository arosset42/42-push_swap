/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 13:47:59 by arosset           #+#    #+#             */
/*   Updated: 2017/05/17 13:48:47 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int		main(int argc, char **argv)
{
	if (argc != 1)
	{
		ft_push_swap(argc, argv);
	}
	else
		ft_error(1);
	return (0);
}

void 	ft_push_swap(int argc, char **argv)
{
	int		pa[argc];
	int		i;

	i = 1;
	while (argv[i])
	{
		if (ft_check_digit(argv[i]) != -1 && ft_check_min_max(argv[i]) != -1)
		{
			pa[i] = ft_atoi(argv[i]);
			i++;
		}
		else
			ft_error(2);
	}
	if (ft_check_double(pa, argc) != -1)
	{
		ft_choice_algo(pa, argc)
	}
	else
		ft_error(3);
	ft_print_pile(pa, argc);

}
