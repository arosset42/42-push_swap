#include "push_swap.h"

static void		push(t_stack *stack_1, t_stack *stack_2)
{
	if (stack_2->count)
		dlist_push_front(stack_1, dlist_pop_front(stack_2));
}

void			pa(t_ps *ps)
{
	push(ps->stack_a, ps->stack_b);
}

void			pb(t_ps *ps)
{
	push(ps->stack_b, ps->stack_a);
}
