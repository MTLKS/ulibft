/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 19:06:48 by maliew            #+#    #+#             */
/*   Updated: 2022/07/11 19:21:30 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	res = (char *)ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = f(i, s[i]);
	return (res);
}
