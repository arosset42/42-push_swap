/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 14:59:12 by arosset           #+#    #+#             */
/*   Updated: 2017/05/18 14:59:32 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int		ft_check_digit(char *str)
{
	int 	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]) || str[i] == '-')
			i++;
		else
			return (-1);
	}
	return (1);
}

int		ft_check_min_max(char *str)
{
    long long int	i;

	i = ft_atol(str);
	if (i > 2147483648 || i < -2147483649)
		return (-1);
	else
		return (1);
}

int		ft_check_double(int *pa, int argc)
{
	int i;
	int j;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < argc)
		{
			if ((pa[i] == pa[j]) && (i != j))
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}
