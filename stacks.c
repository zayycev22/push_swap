#include "push_swap.h"

int	check_dups(t_stack *a)
{
	int		i;
	int		j;
	t_stack	*tmp;
	t_stack	*head;

	i = 0;
	head = a;
	while (a)
	{
		j = 0;
		tmp = head;
		while (tmp)
		{
			if (tmp->number == a->number && i != j)
				return (0);
			tmp = tmp->next;
			j++;
		}
		i++;
		a = a->next;
	}
	return (1);
}

void	set_stack(t_stack **a, char **argv)
{
	int			i;
	long int	data;
	t_stack		*tmp;

	i = 1;
	while (argv[i])
	{
		if (!ft_number(argv[i]))
			exit_f(0);
		data = ft_atoi(argv[i]);
		if (data > INT_MAX || data < INT_MIN)
			exit_f(0);
		tmp = ft_new_elem((int)data);
		if (!tmp)
			exit_f(0);
		ft_stack_back(a, tmp);
		i++;
	}
	if (!check_dups(*a))
		exit_f(0);
}

int	is_sorted(t_stack *a)
{
	t_stack	*tmp;

	tmp = a;
	while (tmp->next != NULL)
	{
		if (tmp->number > tmp->next->number)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
