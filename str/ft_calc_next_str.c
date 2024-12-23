/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_next_str.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:41:54 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/22 14:57:20 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

static int	ft_min(int argn, ...)
{
	va_list	ap;
	int		minimum;
	int		tmp;
	int		i;

	i = 0;
	va_start(ap, argn);
	minimum = INT_MAX;
	while (i < argn)
	{
		tmp = va_arg(ap, int);
		if (tmp < minimum)
		{
			minimum = tmp;
		}
		i++;
	}
	va_end(ap);
	return (minimum);
}

int	ft_calc_next_str(char *src, char *set)
{
	size_t	i;
	int		min_idx;

	i = 0;
	min_idx = ft_strlen(src);
	while (i < ft_strlen(set))
	{
		min_idx = ft_min(2, min_idx, ft_calc_next_chr(src, set[i]));
		i++;
	}
	return (min_idx);
}
