//
// Created by Lakisha Robbie on 1/19/22.
//

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"
# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_stack_elem
{
	int					number;
	size_t				index;
	struct s_stack_elem	*next;
}						t_stack;

t_stack		*ft_new_elem(int data);
//void		out_stack(t_stack *a);
void		set_stack(t_stack **a, char **argv);
t_stack		*ft_lstlast(t_stack *lst);
void		ft_stack_back(t_stack **lst, t_stack *new);
void		exit_f(int status);
int			is_sorted(t_stack *a);
int			ft_number(char *str);
void		ft_del_last(t_stack **a);
int			ft_stack_size(t_stack *lst);
void		ft_stack_add_front(t_stack **stack, t_stack *new);
void		reverse_rotate(t_stack **a, int flag, char *message);
void		sort_small(t_stack **a);
#endif