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
	t_dlist	*list;

	if (argc != 1)
	{
		list = create_list(*list, argv);
		if (!list)
			ft_putstr_fd("Error\n", 2);
	}
	else
		ft_putstr_fd("Error\n", 2);
	return (0);
}

t_dlist		*create_list(t_dlist list, char **argv)
{
	list = dlistnew(argv[1]);
	if (!list)
		return (NULL);
}

t_dlist		dlistnew(char *str)
{
	t_dlist		*new;

	if (!(new = (t_dlist *)malloc(sizeof(t_dlist))))
		return (NULL);
	if (str == NULL)
		return (NULL);
	else
	{
		if (check_value(str) != -1)
		{
			new->value = malloc(sizeof(int));
			new->value = ft_atoi(str);
			new->next = NULL;
			new->prev = NULL;
		}
		else
			return (NULL);
	}
	return (*new);
}

int		check_value(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (-1);
		i++;
	}
	return (1);
}
