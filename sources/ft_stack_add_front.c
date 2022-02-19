//
// Created by Lakisha Robbie on 2/20/22.
#include "../push_swap.h"

void	ft_stack_add_front(t_stack **stack, t_stack *new)
{
	if (stack && new)
	{
		new->next = *stack;
		*stack = new;
	}
}
