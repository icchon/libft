/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:49:26 by icchon            #+#    #+#             */
/*   Updated: 2024/12/22 14:59:35 by kaisobe          ###   ########.fr       */
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

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;
	size_t	i;

	if (len == 0)
	{
		if (needle[0] == '\0')
			return ((char *)haystack);
		return (NULL);
	}
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i + needle_len <= (size_t)ft_min(2, haystack_len, len) && i < len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}
