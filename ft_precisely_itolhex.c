/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precisely_itolhex.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:57:22 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/10 18:52:26 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_precisely_itolhex(uintptr_t n, int precision)
{
	char		*res;
	int			i;
	const char	*hex_elems = "0123456789ABCDEF";
	int			length;
	int			zero_cnt;

	zero_cnt = ft_max(2, 0, (precision - ft_get_digit_cnt(n, 16)));
	length = ft_get_digit_cnt(n, 16) + zero_cnt;
	res = (char *)ft_calloc((length + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	i = length - 1;
	ft_memset(res, '0', length);
	while (i >= 0)
	{
		res[i] = hex_elems[(n % 16)];
		n /= 16;
		i--;
	}
	return (res);
}
