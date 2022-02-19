/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 15:30:57 by                   #+#    #+#             */
/*   Updated: 2021/10/21 21:44:03 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*a;
	char unsigned		b;

	a = s;
	b = c;
	i = 0;
	while (i < n)
	{
		if (a[i] == b)
			return ((void *)(a + i));
		i++;
	}
	return (NULL);
}
