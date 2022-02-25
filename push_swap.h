/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:36:20 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:36:29 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_list
{
	int				data;
	int				index;
	struct s_list	*next;
}	t_list;

long int	ft_atoi(const char *str);
void		check_dups(int argc, char **argv);
t_list		*create_elem(long int a);
void		push_back(t_list **list, long int a);
void		pa_pb(t_list **list_a, t_list **list_b, char c);
void		ft_bubble_array(int *array, int argc);
void		check_sort(t_list *a);
void		sa_sb_ss(t_list **list_a, t_list **list_b, char c);
void		rra_rrb_rrr(t_list **list_a, t_list **list_b, char c);
void		ra_rb_rr(t_list **list_a, t_list **list_b, char c);
int			count_n(t_list *list);
int			ft_get_max_i(t_list **stack, int diap);
void		large(t_list **a, t_list **b, int argc);
void		big(t_list **a, t_list **b, int argc);
void		sort(t_list **a, t_list **b, int c_elements);
#endif