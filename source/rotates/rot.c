/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:36:47 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:36:48 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	ft_rotate(t_list **list)
{
	t_list	*new_last;
	t_list	*new_first;

	new_last = *list;
	*list = (*list)->next;
	new_first = *list;
	while (new_first->next)
	{
		new_first = new_first->next;
	}
	new_first->next = new_last;
	new_first->next->next = NULL;
}

void	ra_rb_rr(t_list **list_a, t_list **list_b, char c)
{
	if (c == 'a')
	{
		ft_rotate(list_a);
		write(1, "ra\n", 3);
	}
	else if (c == 'b')
	{
		ft_rotate(list_b);
		write(1, "rb\n", 3);
	}
	else
	{
		ft_rotate(list_a);
		ft_rotate(list_b);
		write(1, "rr\n", 3);
	}
}
