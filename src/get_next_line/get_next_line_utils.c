/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 03:59:26 by maliew            #+#    #+#             */
/*   Updated: 2022/07/27 19:46:31 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	gnl_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*gnl_strchr(char *s, char c)
{
	while (*s && *s != c)
		s++;
	if (*s == c)
		return (s);
	return (0);
}

void	*gnl_calloc(int count, int size)
{
	void	*res;
	int		len;
	int		i;

	if (!count || !size)
		return (NULL);
	len = count * size;
	if (count != len / size)
		return (NULL);
	res = (void *)malloc(len);
	if (!res)
		return (NULL);
	i = 0;
	while (len-- > 0)
		((char *)res)[i++] = '\0';
	return (res);
}

char	*gnl_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	res = (char *)gnl_calloc(gnl_strlen(s1) + gnl_strlen(s2) + 1, sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (*s1)
		res[i++] = *s1++;
	while (*s2)
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}

char	*gnl_substr(char *s, int start, int len)
{
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	if (gnl_strlen(s) < start)
		return (gnl_calloc(1, 1));
	if (gnl_strlen(s + start) < len)
		len = gnl_strlen(s + start);
	res = (char *)gnl_calloc(len + 1, sizeof(char));
	if (!res)
		return (NULL);
	len++;
	i = 0;
	s += start;
	while (len-- > 1 && *s)
		res[i++] = *s++;
	res[i] = '\0';
	return (res);
}
