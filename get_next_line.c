/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:45:05 by sfernand          #+#    #+#             */
/*   Updated: 2023/01/02 17:28:25 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*rad_file(int fd, char *res_buff)
{
	char	*buffer;
	int		n_read;

	if (!res_buff)
		res_buff = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	n_read = 1;
}

char *get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	buffer = rad_file(fd, buffer);
	if (!buffer)
		return (NULL);
}
