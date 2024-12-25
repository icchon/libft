/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 14:06:45 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/25 15:28:20 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_is.h"
#include <stdio.h>

int	ft_isint(const char *nptr)
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
	while (nptr[i])
	{
		if (!ft_isdigit(nptr[i]))
		{
			return (0);
		}
		res = res * 10 + sign * (nptr[i++] - '0');
		if (res > INT_MAX || res < INT_MIN)
		{
			return (0);
		}
	}
	return (1);
}
