/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 18:49:03 by maliew            #+#    #+#             */
/*   Updated: 2022/07/12 00:31:24 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_count(long n)
{
	int	count;

	if (!n)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	get_string(long n, int count, char *res)
{
	res[count--] = 0;
	if (!n)
	{
		res[0] = '0';
		return ;
	}
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n)
	{
		res[count--] = n % 10 + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	long	num;
	int		count;

	num = (long)n;
	count = get_count(num);
	res = (char *)malloc((count + 1) * sizeof(char));
	if (!res)
		return (NULL);
	get_string(num, count, res);
	return (res);
}
