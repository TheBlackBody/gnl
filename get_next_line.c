/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfernand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:45:05 by sfernand          #+#    #+#             */
/*   Updated: 2023/01/03 17:38:00 by sfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

char	*join(char *res, char *buffer)
{
	char *temp;

	temp = ft_strjoin(res, buffer);
	free(buffer);
	return (temp);
}

char	*rad_file(int fd, char *res_buff)
{
	char	*buffer;
	int		n_read;

	if (!res_buff)
		res_buff = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	n_read = 1;
	while (n_read > 0)
	{
		n_read = read(fd, buffer, BUFFER_SIZE);
		if (n_read == 0)
		{
			free (buffer);
			return (NULL);
		}
		buffer[n_read] = 0;
		res_buff = join(res_buff, buffer);
		if (ft_strchr(buffer, '\n'))
			break;
	}
	free (buffer);
	return (res_buff);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*line;

	buffer = read_file(fd, buffer);
	if (!buffer)
		return (NULL);
}
