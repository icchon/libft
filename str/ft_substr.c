/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 07:03:48 by icchon            #+#    #+#             */
/*   Updated: 2024/12/22 15:00:18 by kaisobe          ###   ########.fr       */
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

static int	ft_max(int argn, ...)
{
	va_list	ap;
	int		maximum;
	int		tmp;
	int		i;

	i = 0;
	va_start(ap, argn);
	maximum = INT_MIN;
	while (i < argn)
	{
		tmp = va_arg(ap, int);
		if (tmp > maximum)
		{
			maximum = tmp;
		}
		i++;
	}
	va_end(ap);
	return (maximum);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		length;
	int		i;

	length = ft_max(2, 0, ft_min(2, len, ft_strlen(s) - start));
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < length)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
