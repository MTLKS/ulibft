/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 13:52:12 by maliew            #+#    #+#             */
/*   Updated: 2022/07/09 14:33:20 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	sum;

	sign = 1;
	sum = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\r' || *str == '\v' || *str == '\f')
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		if (sign == 1
			&& (sum > 214748364 || (sum == 214748364 && *str - '0' > 7)))
			return (-1);
		else if (sign == -1
			&& (sum > 214748364 || (sum == 214748364 && *str - '0' > 8)))
			return (0);
		sum = sum * 10 + *str - '0';
		str++;
	}
	return (sum * sign);
}
