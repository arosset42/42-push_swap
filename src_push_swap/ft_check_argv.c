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

int		ft_check(char *str)
{
	if (ft_check_digit(str) == -1 || ft_check_min_max(str) == -1)
		return(-1);
	else
		return (1);
}

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

void	ft_check_double(t_plist *lst, int value)
{
	t_node *elem;

	if (lst)
	{
		elem = lst->head;
		while (elem)
		{
			if (elem->val == value)
				ft_error(3);
			elem = elem->next;
		}
	}
}
