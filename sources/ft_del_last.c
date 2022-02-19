#include "../push_swap.h"

void	ft_del_last(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if ((*a) == NULL)
		return ;
	if ((*a)->next == NULL)
	{
		free(a);
		return ;
	}
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	free(tmp->next);
	tmp->next = NULL;
	return ;
}
