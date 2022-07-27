/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 14:32:32 by maliew            #+#    #+#             */
/*   Updated: 2022/07/09 15:18:29 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	res = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	return (res);
}
