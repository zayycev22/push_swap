#include "../../push_swap.h"

int	check_dups(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
			{
				write("Error\n", 6);
				exit(EXIT_SUCCESS);
			}
		}
	}
}
