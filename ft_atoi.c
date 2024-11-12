/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 18:10:11 by icchon            #+#    #+#             */
/*   Updated: 2024/10/26 10:19:19 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (('\t' <= c && c <= '\r') || c == ' ');
}

static int	ft_issign(int c)
{
	return (c == '+' || c == '-');
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (ft_issign(nptr[i]))
		if (nptr[i++] == '-')
			sign *= -1;
	while (ft_isdigit(nptr[i]))
	{
		res = res * 10 + sign * (nptr[i++] - '0');
		if (res >= LONG_MAX || res <= LONG_MIN)
		{
			if (res >= LONG_MAX)
				res = LONG_MAX;
			if (res <= LONG_MIN)
				res = LONG_MIN;
			break ;
		}
	}
	return ((int)res);
}
