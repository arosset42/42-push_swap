#include "push_swap.h"

static int		nb_elem_stack(t_stack *stack)
{
	int				i;
	int				value_origin;
	t_stack_node	*cursor;

	i = 0;
	cursor = FIRST(stack);
	value_origin = CURR_VAL(cursor);
	cursor = cursor->next;
	while (cursor && CURR_VAL(cursor) != value_origin)
	{
		cursor = cursor->next;
		i++;
	}
	return (i);
}

static int		min_position(t_stack *stack)
{
	int				min;
	int				nb_element;
	int				position;
	t_stack_node	*cursor;

	min = find_min(stack);
	nb_element = nb_elem_stack(stack);
	cursor = FIRST(stack);
	position = 0;
	// ft_printf("min = %d, nb_elem= %d, cursor = %d, pos = %d\n", min, nb_element, CURR_VAL(cursor), position);
	while (CURR_VAL(cursor) != min)
	{
		position++;
		cursor = cursor->next;
	}
	// ft_printf("nb_elem %d , pos = %d, cursor %d\n", nb_element, position, CURR_VAL(cursor));
	if (nb_element - position - 2 < nb_element - (nb_element - position))
		return ((position - nb_element) - 1);
	return (position);
}

void			select_node(int position, t_ps *ps)
{
	while (position != 0 && ps->total_ops < MAX_OPS)
	{
		if (position > 0)
		{
			OP(RA);
			position--;
		}
		else if (position < 0)
		{
			OP(RRA);
			position++;
		}
	}
}

void			select_sort(t_ps *ps)
{
	t_stack_node		*node_a;
	t_stack_node		*node_b;
	int					position;

	node_a = FIRST(ps->stack_a);
	while (node_a->next)
	{
		position = min_position(ps->stack_a);
		// ft_printf("min = %d\n", position);
		select_node(position, ps);
		OP(PB);
		node_a = FIRST(ps->stack_a);
	}
	node_b = FIRST(ps->stack_b);
	while (node_b)
	{
		OP(PA);
		node_b = FIRST(ps->stack_b);
	}
}
