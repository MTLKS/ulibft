/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:49:52 by maliew            #+#    #+#             */
/*   Updated: 2022/07/12 19:01:43 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	len;

	if (!count || !size)
		return (NULL);
	len = count * size;
	if (count != len / size)
		return (NULL);
	res = (void *)malloc(len);
	if (!res)
		return (NULL);
	ft_bzero(res, len);
	return (res);
}
