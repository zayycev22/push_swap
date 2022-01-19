#include "push_swap.h"

void	set_index(t_stack **a, const long int *array, int argc)
{
	int		i;
	t_stack	*tmp;

	tmp = *a;
	while (tmp != NULL)
	{
		i = 0;
		while (i < argc)
		{
			if (array[i] == tmp->number)
			{
				tmp->index = i;
				break ;
			}
			i++;
		}
		tmp = tmp->next;
	}
}

void	set_stack(t_stack **a, char **argv, int argc)
{
	int		i;

	i = 1;
	while (i < argc)
	{
		ft_lstadd_back(a, new_elem((int) ft_atoi(argv[i])));
		i++;
	}
}

void	out_stack(t_stack *a)
{
	while (a != NULL)
	{
		printf("%d %d\n", a->number, a->index);
		a = a->next;
	}
}
