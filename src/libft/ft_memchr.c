/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:18:46 by maliew            #+#    #+#             */
/*   Updated: 2022/07/12 01:00:43 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	void	*buffer;

	buffer = (void *)s;
	while (n-- > 0)
	{
		if (*((char *) buffer) == (char)c)
			return (buffer);
		buffer++;
	}
	return (0);
}
