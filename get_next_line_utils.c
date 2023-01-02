/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:21:51 by sfernand          #+#    #+#             */
/*   Updated: 2023/01/02 16:57:49 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

void	ft_bzero(void *p, size_t n)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)p;
	while (i < n)
	{
		a[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	char		*dest;
	size_t		n;

	n = (count * size);
	if (count != 0 && size >= SIZE_MAX / count)
		return (0);
	dest = (void *)malloc(n);
	if (!dest)
	{
		return (NULL);
	}
	ft_bzero(dest, n);
	return (dest);
}
