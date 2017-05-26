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
	char	**tab;
	int		nbelem;

	if (argc != 1)
	{
		if (argc == 2)
		{
			tab = ft_strsplit(argv[1], ' ');
			nbelem = ft_nbelem(tab);
			int i = 0;
			while (tab[i])
			{
				i++;
			}
			ft_push_swap_arg(nbelem, tab);
		}
		else
			ft_push_swap(argc, argv);
	}
	else
		ft_error(1);
	return (0);
}

void 	ft_push_swap_arg(int nbelem, char **tab)
{
	t_plist		*list_a;
	t_plist		*list_b;
	int			i;
	int			nb;

	i = 0;
	list_a = ft_plistnew();
	list_b = ft_plistnew();
	if (nbelem < 1 || !list_a || !list_b)
		ft_error(10);
	while (i < nbelem)
	{
		if (ft_check(tab[i]) == 1)
		{
			nb = ft_atol(tab[i]);
			ft_check_double(list_a, (int)nb);
			list_a = ft_plistadd(list_a, (int)nb);
			i++;
		}
	}
	main_algo(list_a, list_b);
}


void 	ft_push_swap(int argc, char **argv)
{
	t_plist		*list_a;
	t_plist		*list_b;
	long		nb;
	int			i;

	i = 1;
	list_a = ft_plistnew();
	list_b = ft_plistnew();
	if (argc < 1 || !list_a || !list_b)
		ft_error(10);
	while (argc-- > 1)
	{
		if (ft_check(argv[i]) == 1)
		{
			nb = ft_atol(argv[i++]);
			ft_check_double(list_a, (int)nb);
			list_a = ft_plistadd(list_a, (int)nb);
		}
	}
	main_algo(list_a, list_b);
}

int		ft_nbelem(char **tab)
{
	int		i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}
