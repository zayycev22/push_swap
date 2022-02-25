/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sorting.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:36:56 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:36:57 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	small(t_list **t1, t_list **t2);

static void	medium(t_list **t1, t_list **t2, int argc);

void	sort(t_list **a, t_list **b, int c_elements)
{
	if (c_elements == 2)
	{
		sa_sb_ss(a, b, 'a');
	}
	else if (c_elements == 3)
	{
		small(a, b);
	}
	else if (c_elements <= 5)
		medium(a, b, c_elements + 1);
	else if (c_elements >= 6 && c_elements <= 100)
		big(a, b, c_elements + 1);
	else
		large(a, b, c_elements + 1);
}

static void	small(t_list **t1, t_list **t2)
{
	int	a;
	int	b;
	int	c;

	a = (*t1)->data;
	b = (*t1)->next->data;
	c = (*t1)->next->next->data;
	if (a > b && c > b && c > a)
		sa_sb_ss(t1, t2, 'a');
	else if (a > b && a > c && b > c)
	{
		sa_sb_ss(t1, t2, 'a');
		rra_rrb_rrr(t1, t2, 'a');
	}
	else if (a > b && c > b && a > c)
		ra_rb_rr(t1, t2, 'a');
	else if (a < b && a < c && b > c)
	{
		sa_sb_ss(t1, t2, 'a');
		ra_rb_rr(t1, t2, 'a');
	}
	else if (a < b && a > c && b > c)
		rra_rrb_rrr(t1, t2, 'a');
}

static void	medium_finish(t_list **t1, t_list **t2)
{
	small(t1, t2);
	while (count_n(*t2) != 0)
	{
		if ((*t2)->index == 0)
			pa_pb(t1, t2, 'a');
		else
		{
			pa_pb(t1, t2, 'a');
			ra_rb_rr(t1, t2, 'a');
		}
	}
}

static void	medium(t_list **t1, t_list **t2, int argc)
{
	t_list	*max_min;

	max_min = *t1;
	while (count_n(*t1) != 3)
	{
		if (max_min->index == 0)
		{
			max_min = max_min->next;
			pa_pb(t1, t2, 'b');
		}
		else if (max_min->index == argc - 2)
		{
			max_min = max_min->next;
			pa_pb(t1, t2, 'b');
		}
		else
		{
			max_min = max_min->next;
			ra_rb_rr(t1, t2, 'a');
		}
	}
	medium_finish(t1, t2);
}
