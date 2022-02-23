#include "../../push_swap.h"

void	ft_bubble_array(int *array, int argc)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (array[j - 1] > array[j])
			{
				tmp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	check_sort(t_list *a)
{
	t_list	*tmp;
	int		flag;

	flag = 0;
	tmp = a;
	while (tmp->next != NULL)
	{
		if (tmp->data > tmp->next->data)
		{
			flag = 1;
			break ;
		}
		tmp = tmp->next;
	}
	if (!flag)
		exit(EXIT_SUCCESS);
}
