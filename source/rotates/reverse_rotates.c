/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotates.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:36:43 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:36:44 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static t_list	*find_pre_last(t_list *list)
{
	t_list	*pre_last;

	pre_last = NULL;
	if (list && list->next)
	{
		pre_last = list;
		while (pre_last->next->next)
			pre_last = pre_last->next;
	}
	return (pre_last);
}

static void	ft_reverse_rotate(t_list **list)
{
	t_list	*pre_last;
	t_list	*last;
	t_list	*tmp;

	if (*list && (*list)->next)
	{
		tmp = *list;
		pre_last = find_pre_last(*list);
		last = pre_last->next;
		pre_last->next = NULL;
		last->next = tmp;
		*list = last;
	}
}

void	rra_rrb_rrr(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_reverse_rotate(list_a);
		write(1, "rra\n", 4);
	}
	else if (c == 'b')
	{
		ft_reverse_rotate(list_b);
		write(1, "rrb\n", 4);
	}
	else
	{
		ft_reverse_rotate(list_a);
		ft_reverse_rotate(list_b);
		write(1, "rrr\n", 4);
	}
}
