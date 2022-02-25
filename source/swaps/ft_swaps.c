/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:37:07 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:37:08 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_swap(t_list **list)
{
	t_list	*a;
	t_list	*b;

	a = *list;
	b = (*list)->next;
	a->next = (*list)->next->next;
	b->next = a;
	*list = b;
}

void	sa_sb_ss(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_swap(list_a);
		write(1, "sa\n", 3);
	}
	else if (c == 'b')
	{
		ft_swap(list_b);
		write(1, "sb\n", 3);
	}
	else
	{
		ft_swap(list_a);
		ft_swap(list_b);
		write(1, "ss\n", 3);
	}
}
