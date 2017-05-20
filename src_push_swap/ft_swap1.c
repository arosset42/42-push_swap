/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 17:38:19 by arosset           #+#    #+#             */
/*   Updated: 2017/05/20 17:38:28 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.c"

int 	*ft_sa(int *pa, int nba)
{
	int		tmp;

	if (nba < 2)
		return (pa);
	else
	{
			tmp = pa[1];
			pa[1] = pa[2];
			pa[2] = tmp;
			ft_putstr("sa\n");
	}
	return (pa)
}

int 	*ft_sb(int *pb, int nbb)
{
	int		tmp;

	if (nbb < 2)
		return (pb);
	else
	{
			tmp = pb[1];
			pb[1] = pb[2];
			pb[2] = tmp;
			ft_putstr("sb\n");
	}
	return (pb)
}

int	 *ft_ss(int *pa, int nba, int *pb, int nbb)
{
	ft_sa(pa, nba);
	ft_sb(pb, nbb);
	ft_putstr("ss\n");
	return (pa)
}

int		*ft_pb(int *pa, int nba, int *pb, int nbb)
{
	if (nbb == 0)
	{
		ft_putstr("b vide\n");
		return (pa);
	}
	else
	{
		pb[1] ==
	}
}
