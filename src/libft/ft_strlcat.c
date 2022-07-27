/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:44:59 by maliew            #+#    #+#             */
/*   Updated: 2022/07/13 20:21:37 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*buffer;
	size_t	i;
	size_t	res;

	buffer = dst;
	i = 0;
	res = 0;
	while (*buffer)
	{
		buffer++;
		i++;
	}
	if (i > size)
		res = size + ft_strlen(src);
	else
		res = i + ft_strlen(src);
	while (i + 1 < size && *src)
	{
		*buffer++ = *src++;
		i++;
	}
	*buffer = '\0';
	return (res);
}
