/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:32:12 by maliew            #+#    #+#             */
/*   Updated: 2022/07/11 18:46:05 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <unistd.h>

static void	split_words(char const *s, char c, char **res)
{
	int		find;
	int		i;
	int		j;
	int		len;

	find = 1;
	i = -1;
	len = 0;
	while (s[++i])
	{
		if (s[i] != c && find)
		{
			find = 0;
			j = 0;
			while (s[i + j] != c && s[i + j])
				j++;
			res[len] = ft_substr(s, i, j);
			len++;
		}
		else if (s[i] == c)
			find = 1;
	}
	res[len] = 0;
}

static int	count_words(char const *s, char c)
{
	int	find;
	int	i;
	int	res;

	find = 1;
	i = -1;
	res = 0;
	while (s[++i])
	{
		if (s[i] != c && find)
		{
			find = 0;
			res++;
		}
		else if (s[i] == c)
			find = 1;
	}
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	if (!s)
		return (NULL);
	res = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	split_words(s, c, res);
	return (res);
}
