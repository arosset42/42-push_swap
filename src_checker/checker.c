/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/03 15:51:38 by arosset           #+#    #+#             */
/*   Updated: 2017/06/19 21:01:44 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

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

static	void	ft_check_arg(t_plist *list_a, int nbelem, char **tab)
{
	int		i;
	int		nb;

	i = 0;
	while (i < nbelem)
	{
		if (ft_strcmp(tab[i], "-v") == 0)
		{
			list_a->v = 1;
			i++;
		}
		else if (ft_check(tab[i]) == 1)
		{
			nb = ft_atol(tab[i]);
			ft_check_double(list_a, (int)nb);
			list_a = ft_plistadd(list_a, (int)nb);
			i++;
		}
		else
			ft_error();
	}
}

static void		ft_checker(int nbelem, char **tab)
{
	t_plist		*list_a;
	t_plist		*list_b;

	list_a = ft_plistnew();
	list_b = ft_plistnew();
	if (nbelem < 1 || !list_a || !list_b)
		ft_error();
	ft_check_arg(list_a, nbelem, tab);
	ft_start_verif(list_a, list_b);
	ft_free_struct(list_a, list_b);
}

int				main(int argc, char **argv)
{
	char	**tab;
	int		nbelem;
	int		i;
	char	*str;

	i = 2;
	if (argc != 1)
	{
		str = argv[1];
		while (i < argc)
		{
			str = ft_strjoin(str, " ");
			str = ft_strjoin(str, argv[i]);
			i++;
		}
		tab = ft_strsplit(str, ' ');
		nbelem = ft_nbelem(tab);
		ft_checker(nbelem, tab);
	}
	return (0);
}
