/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lists.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:37:04 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:37:05 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_list	*create_elem(long int a)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	elem->data = (int)a;
	elem->next = NULL;
	return (elem);
}

void	push_back(t_list **list, long int a)
{
	t_list	*new_elem;
	t_list	*tmp;

	if (*list)
	{
		new_elem = create_elem(a);
		tmp = *list;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_elem;
	}
	else
		*list = create_elem(a);
}
