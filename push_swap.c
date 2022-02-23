#include "push_swap.h"
#include <stdio.h>

static void	ft_get_indexs(t_list **a, const int *arr, int argc)
{
	int		i;
	t_list	*tmp;

	tmp = *a;
	while (tmp != NULL)
	{
		i = 1;
		while (i < argc)
		{
			if (arr[i - 1] == tmp->data)
				tmp->index = i - 1;
			i++;
		}
		tmp = tmp->next;
	}
}

static void	create_stack(int *arr, t_list **a, int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		arr[i - 1] = (int)ft_atoi(argv[i]);
		push_back(a, arr[i - 1]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		*tmp_arr;

	a = NULL;
	b = NULL;
	if (argc <= 2)
		exit(1);
	tmp_arr = (int *)malloc(sizeof(int) * (argc - 1));
	if (!tmp_arr)
		return (0);
	check_dups(argc, argv);
	create_stack(tmp_arr, &a, argc, argv);
	check_sort(a);
	ft_bubble_array(tmp_arr, argc);
	ft_get_indexs(&a, tmp_arr, argc);
}
