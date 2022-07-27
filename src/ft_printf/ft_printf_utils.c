/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 19:57:25 by maliew            #+#    #+#             */
/*   Updated: 2022/07/27 20:01:50 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ftpf_width(int width, char c)
{
	int	i;

	i = 0;
	while (i < width)
	{
		write(1, &c, 1);
		i++;
	}
	return (i);
}

void	ftpf_get_neg(long *n, int *neg)
{
	if (*n < 0)
	{
		*neg = 1;
		*n *= -1;
	}
	else
		*neg = 0;
}

int	ftpf_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}

int	ftpf_get_len_base(unsigned long n, int base_len)
{
	int	count;

	count = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		n /= base_len;
		count++;
	}
	return (count);
}

void	ftpf_print_base(unsigned long n, char *base)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (!n)
		write(1, base, 1);
	else
	{
		if (n >= base_len)
		{
			ftpf_print_base(n / base_len, base);
			ftpf_print_base(n % base_len, base);
		}
		else
			write(1, base + n, 1);
	}
}
