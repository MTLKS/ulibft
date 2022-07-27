/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 09:04:09 by maliew            #+#    #+#             */
/*   Updated: 2022/07/09 09:22:37 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	s2_len;

	if (!*s2 || !s2)
		return ((char *) s1);
	i = 0;
	s2_len = ft_strlen(s2);
	while (i < n && s1[i] && i + s2_len <= n)
	{
		if (ft_strncmp(s1 + i, s2, s2_len) == 0)
			return ((char *) s1 + i);
		i++;
	}
	return (0);
}
