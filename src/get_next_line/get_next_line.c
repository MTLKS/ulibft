/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 02:14:16 by maliew            #+#    #+#             */
/*   Updated: 2022/07/27 19:46:29 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	gnl_read(char **buffer, int fd)
{
	char	*new_buffer;
	char	*temp;
	int		read_output;

	new_buffer = (char *)gnl_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!new_buffer)
		return (-1);
	if (!*buffer)
		*buffer = gnl_calloc(1, 1);
	read_output = 1;
	while (!gnl_strchr(*buffer, '\n') && read_output > 0)
	{
		read_output = read(fd, new_buffer, BUFFER_SIZE);
		if (read_output == -1)
			break ;
		new_buffer[read_output] = '\0';
		temp = gnl_strjoin(*buffer, new_buffer);
		free(*buffer);
		*buffer = temp;
	}
	free(new_buffer);
	return (read_output);
}

static char	*gnl_pop_buffer(char **buffer)
{
	char	*res;
	char	*temp;
	int		index;

	if (gnl_strchr(*buffer, '\n'))
		index = (int)(gnl_strchr(*buffer, '\n') - *buffer);
	else
		index = gnl_strlen(*buffer);
	res = gnl_substr(*buffer, 0, index + 1);
	temp = gnl_substr(*buffer, index + 1, gnl_strlen(*buffer));
	free(*buffer);
	*buffer = temp;
	return (res);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	int			read_output;

	if (fd < 0 || fd > 1024 || BUFFER_SIZE < 1)
		return (NULL);
	read_output = gnl_read(&buffer[fd], fd);
	if (read_output == -1 || (!*buffer[fd] && !read_output))
	{
		if (buffer[fd])
		{
			free(buffer[fd]);
			buffer[fd] = NULL;
		}
		return (NULL);
	}
	return (gnl_pop_buffer(&buffer[fd]));
}
