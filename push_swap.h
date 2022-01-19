//
// Created by Lakisha Robbie on 1/19/22.
//

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include<stdlib.h>
# include "libft/libft.h"

typedef	struct			s_stack_elem
{
	int					number;
	size_t				index;
	struct s_stack_elem	*next;
}						t_stack;

t_stack		*new_elem(int number);
void		sort_arr(long int *array, int size);
void		print(long int *array, int argc);
void		out_stack(t_stack *a);
void		set_stack(t_stack **a, char **argv, int argc);
void		set_index(t_stack **a, const long int *array, int argc);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_lstadd_back(t_stack **lst, t_stack *new);
#endif PUSH_SWAP_H