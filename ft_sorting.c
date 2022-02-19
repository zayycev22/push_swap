#include "push_swap.h"

static int	pop(t_stack **a)
{
	int		d;
	t_stack	*tmp;

	tmp = ft_lstlast(*a);
	d = tmp->number;
	ft_del_last(a);
	return (d);
}

void	ft_sorting(t_stack **a, t_stack **b)
{
	if (ft_stack_size(*a) <= 3)
		sort_small(a);
	else if ()
}
