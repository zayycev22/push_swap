#include "push_swap.h"

void	sort_arr(long int *array, int size)
{
	int	i;
	int	min;
	int	tmp;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[min])
				min = j;
			j++;
		}
		if (min != i)
		{
			tmp = (int)array[i];
			array[i] = array[min];
			array[min] = tmp;
		}
		i++;
	}
}

void	print(long int *array, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ft_putnbr_fd((int)array[i], 0);
		ft_putchar_fd('\n', 0);
		i++;
	}
}
