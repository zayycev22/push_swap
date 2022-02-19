#include "../../push_swap.h"

void	reverse_rotate(t_stack **a, int flag, char *message)
{
	int		data;
	t_stack	*last;

	last = ft_lstlast(*a);
	data = last->number;
	ft_del_last(&last);
	ft_stack_add_front(a, ft_new_elem(data));
	ft_putstr_fd(message, 1);
}
