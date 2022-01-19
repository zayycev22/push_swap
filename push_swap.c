#include "push_swap.h"

t_stack	*new_elem(int number)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->next = NULL;
	new->number = number;
	new->next = NULL;
	return (new);
}

static int	check_letters(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

static int	dups(long int *arr, int argc)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (j < argc)
		{
			if (arr[i] == arr[j] && i != j)
				return (0);
		}
		i++;
	}
	return (1);
}

void	checks(char **argv, long int *array, int argc)
{
	int			i;

	i = 1;
	while (i < argc)
	{
		if (!check_letters(argv[i]))
		{
			ft_putstr_fd("Error\n", 0);
			exit(-1);
		}
		array[i - 1] = ft_atoi(argv[i]);
		if (array[i - 1] > 2147483647 || array[i - 1] < -2147483648)
		{
			ft_putstr_fd("Error\n", 0);
			exit(-1);
		}
		i++;
	}
	if (!dups(array, argc - 1))
	{
		ft_putstr_fd("Error\n", 0);
		exit(-1);
	}
}

int	main(int argc, char **argv)
{
	long int	*array;
	t_stack		*a;
	t_stack		*b;

	a = 0;
	b = NULL;
	array = (long int *)malloc(sizeof(long int) * argc);
	if (!array)
		return (0);
	if (argc <= 2)
		exit(1);
	checks(argv, array, argc);
	sort_arr(array, argc - 1);
	//print(array, argc);
	set_stack(&a, argv, argc);
	set_index(&a, array, argc - 1);
	//out_stack(a);
}
