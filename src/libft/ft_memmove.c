/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 02:09:15 by maliew            #+#    #+#             */
/*   Updated: 2022/07/09 02:16:32 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	void	*buffer;

	buffer = dest;
	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		while (n-- > 0)
			*((char *) dest + n) = *((char *) src + n);
	}
	else
	{
		while (n-- > 0)
		{
			*((char *) dest) = *((char *) src);
			dest++;
			src++;
		}
	}
	return (buffer);
}
