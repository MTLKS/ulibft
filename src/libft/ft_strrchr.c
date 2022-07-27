/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:57:52 by maliew            #+#    #+#             */
/*   Updated: 2022/07/12 01:02:41 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	while (i > 0 && *s != (char)c)
	{
		s--;
		i--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (0);
}
