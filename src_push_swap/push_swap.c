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
	t_plist		*list_a;
	t_plist		*list_b;
	long		nb;
	int			i;

	i = 1;
	list_a = ft_plistnew();
	list_b = ft_plistnew();
	if (argc < 1 || !list_a || !list_b)
		ft_error(10);
	if (argc == 1)
		return (0);
	while (argc-- > 1)
	{
		nb = ft_atol(argv[i++]);
		ft_check_double(list_a, (int)nb);
		list_a = ft_plistadd(list_a, (int)nb);
	}



}


// typedef struct		s_list
// {
// 	void			*content;
// 	size_t			content_size;
// 	struct s_list	*next;
// }					t_list;
