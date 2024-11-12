/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itolhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 13:04:21 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/09 16:38:57 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itolhex(uintptr_t n)
{
	char		*res;
	int			i;
	const char	*hex_elems = "0123456789ABCDEF";
	int			length;

	length = ft_get_digit_cnt(n, 16);
	res = (char *)ft_calloc((length + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	i = length - 1;
	while (i >= 0)
	{
		res[i] = hex_elems[(n % 16)];
		n /= 16;
		i--;
	}
	return (res);
}
