#include "../push_swap.h"

t_stack	*ft_new_elem(int data)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack) * 1);
	if (!stack)
		return (NULL);
	stack->number = data;
	stack->next = NULL;
	return (stack);
}
