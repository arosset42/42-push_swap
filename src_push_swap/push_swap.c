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
	t_list		*list_a;
	t_list		*list_b;
	int			i;

	i = 1;
	while (i < size)
	{
		if (i = 1)
			new = ft_lstnew(ft_atoi(argv[i]), 1);
		else


	list_a =
	list_b = ft_lstnew(NULL, 0);


}


// typedef struct		s_list
// {
// 	void			*content;
// 	size_t			content_size;
// 	struct s_list	*next;
// }					t_list;
