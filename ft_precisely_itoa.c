/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precisely_itoa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 19:19:38 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/10 19:59:40 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_precisely_itoa(int n, int precision)
{
	int			is_sign;
	long long	buff;
	char		*res;
	int			i;
	int			len;

	is_sign = (n < 0);
	buff = (long long)n;
	if (is_sign)
		buff *= -1;
	len = ft_get_digit_cnt(buff, 10) + ft_max(2, 0, (precision
				- ft_get_digit_cnt(buff, 10))) + is_sign;
	res = (char *)ft_calloc((len + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	i = len - 1;
	ft_memset(res, '0', len);
	res[0] = '-';
	while (i >= is_sign)
	{
		res[i] = (buff % 10) + '0';
		buff /= 10;
		i--;
	}
	return (res);
}
