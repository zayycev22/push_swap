#include "../push_swap.h"

static int	ft_stack_min(t_stack *a)
{
	int	data;

	data = INT_MAX;
	while (a)
	{
		if (data > a->number)
			data = a->number;
		a = a->next;
	}
	return (data);
}

static int	ft_stack_max(t_stack *a)
{
	int	data;

	data = INT_MIN;
	while (a)
	{
		if (data < a->number)
			data = a->number;
		a = a->next;
	}
	return (data);
}

void	sort_small(t_stack **a)
{
	int	min;
	int	max;

	min = ft_stack_min(*a);
	max = ft_stack_max(*a);
	while (!is_sorted(*a))
	{
		if ((*a)->number != min && (*a)->next->number == max)
		{

		}
	}
}
