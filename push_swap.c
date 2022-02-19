#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;

	if (argc <= 2)
		exit(1);
	a = 0;
	b = 0;
	set_stack(&a, argv);
	if (!is_sorted(a))

	printf("%d\n", is_sorted(a));
}
