/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 15:51:38 by arosset           #+#    #+#             */
/*   Updated: 2017/06/12 22:37:13 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

static	void	ft_free_struct(t_plist *lst_a, t_plist *lst_b)
{
	t_node *tmp;
	t_node *elem;

	tmp = lst_a->head;
	elem = lst_a->head->next;
	while (elem)
	{
		free(tmp);
		tmp = elem;
		elem = elem->next;
	}
	free(tmp);
	free(lst_a);
	free(lst_b);
}

static void		ft_checker_arg(int nbelem, char **tab)
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
	ft_start_verif(list_a, list_b);
	ft_free_struct(list_a, list_b);
}

static void		ft_checker(int argc, char **argv)
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
	ft_start_verif(list_a, list_b);
	ft_free_struct(list_a, list_b);
}

int				main(int argc, char **argv)
{
	char	**tab;
	int		nbelem;

	if (argc != 1)
	{
		if (argc == 2)
		{
			tab = ft_strsplit(argv[1], ' ');
			nbelem = ft_nbelem(tab);
			ft_checker_arg(nbelem, tab);
		}
		else
			ft_checker(argc, argv);
	}
	else
		ft_error(1);
	return (0);
}
