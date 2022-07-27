/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 01:51:20 by maliew            #+#    #+#             */
/*   Updated: 2022/07/13 20:10:05 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dest, const void *restrict src, size_t n)
{
	void	*buffer;

	buffer = dest;
	if (!dest || !src)
		return (0);
	while (n-- > 0)
	{
		*((char *) dest) = *((char *) src);
		dest++;
		src++;
	}
	return (buffer);
}
