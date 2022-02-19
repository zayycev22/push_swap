#include "push_swap.h"

void	exit_f(int status)
{
	if (!status)
	{
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
	exit(EXIT_SUCCESS);
}
