/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 16:21:51 by sfernand          #+#    #+#             */
/*   Updated: 2023/01/04 16:20:47 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

size_t	ft_strlen(const char *a)
{
	int	i;

	i = 0;
	while (a[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		n;
	int		len1;
	int		len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	dest = malloc(len1 + len2 + 1);
	if (!dest)
		return (0);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	n = 0;
	while (s2[n])
		dest[i++] = s2[n++];
	dest[i] = '\0';
	return (dest);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (0);
}

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
