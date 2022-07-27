/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:54:29 by maliew            #+#    #+#             */
/*   Updated: 2022/07/13 20:22:03 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	char	*buffer;
	size_t	i;

	buffer = dst;
	i = 0;
	if (size != 0)
	{
		while (size-- > 1 && *src)
		{
			*buffer++ = *src++;
			i++;
		}
		*buffer = '\0';
	}
	while (*src++)
		i++;
	return (i);
}
