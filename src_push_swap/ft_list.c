/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 14:05:13 by arosset           #+#    #+#             */
/*   Updated: 2017/05/22 14:05:22 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list		*ft_create_list_a(t_list *list_a, int argc, char **argv)
{
	t_list	*new;
	int		i;

	i = 1;
	while (i < argc && ft_check(argc, argv[i]) != -1)
	{
		if (i = 1)
			new = ft_lstnew(argv[i], 1);

}
