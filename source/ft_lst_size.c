/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 19:44:15 by larobbie          #+#    #+#             */
/*   Updated: 2022/02/25 19:44:16 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	count_n(t_list *list)
{
	int	n;

	n = 0;
	while (list)
	{
		n++;
		list = list->next;
	}
	return (n);
}
