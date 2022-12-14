/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maliew <maliew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 03:45:42 by maliew            #+#    #+#             */
/*   Updated: 2022/09/29 02:21:12 by maliew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}
