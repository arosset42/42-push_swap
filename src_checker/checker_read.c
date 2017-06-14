/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arosset <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/12 20:49:08 by arosset           #+#    #+#             */
/*   Updated: 2017/06/12 22:38:40 by arosset          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/checker.h"

static void		ft_exect_operator(t_plist *l_a, t_plist *l_b,
					char *line, int param)
{
	if (ft_strcmp(line, "sa") == 0)
		ft_sa(l_a, param);
	else if (ft_strcmp(line, "sb") == 0)
		ft_sb(l_b, param);
	else if (ft_strcmp(line, "ss") == 0)
		ft_ss(l_a, l_b, param);
	else if (ft_strcmp(line, "ra") == 0)
		ft_ra(l_a, param);
	else if (ft_strcmp(line, "rb") == 0)
		ft_rb(l_b, param);
	else if (ft_strcmp(line, "rr") == 0)
		ft_rr(l_a, l_b, param);
	else if (ft_strcmp(line, "pa") == 0)
		ft_pa(l_a, l_b, param);
	else if (ft_strcmp(line, "pb") == 0)
		ft_pb(l_a, l_b, param);
	else if (ft_strcmp(line, "rra") == 0)
		ft_rra(l_a, param);
	else if (ft_strcmp(line, "rrb") == 0)
		ft_rrb(l_b, param);
	else if (ft_strcmp(line, "rrr") == 0)
		ft_rrr(l_a, l_b, param);
	else
	{
		// ft_printf("line  >%s<\n", line);
		ft_putendl_fd("Error gnl", 2);
	}
	return ;
}

void			ft_start_verif(t_plist *l_a, t_plist *l_b)
{
	int		ret;
	char	*line;

	while ((ret = get_next_line(0, &line) != 0))
	{
		ft_exect_operator(l_a, l_b, line, 0);
		free(line);
	}
	// ft_printf("1 > %d, 2 > %d\n", l_a->head->value, l_a->tail->value);
	ft_exect_operator(l_a, l_b, line, 1);
	ft_printf("1 > %d, 2 > %d\n", l_a->head->value, l_a->tail->value);
	if (ft_verif_list(l_a->head, l_a->head->next) == 1)
		ft_putendl("OK");
	else
		ft_putendl("KO");
}
