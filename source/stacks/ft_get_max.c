/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_max.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:37:00 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:37:00 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_get_max_i(t_list **stack, int diap)
{
	int		count;
	t_list	*tmp;

	tmp = *stack;
	count = 0;
	while (tmp)
	{
		if (tmp->index == diap)
			break ;
		tmp = tmp->next;
		count++;
	}
	return (count);
}
