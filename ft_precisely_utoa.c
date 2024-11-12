/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precisely_utoa.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:45:51 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/10 19:09:36 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_precisely_utoa(unsigned int n, int precision)
{
	char	*res;
	int		i;
	int		zero_cnt;
	int		len;

	zero_cnt = ft_max(2, 0, (precision - ft_get_digit_cnt(n, 10)));
	len = ft_get_digit_cnt(n, 10) + zero_cnt;
	res = (char *)ft_calloc((len + 1), sizeof(char));
	if (res == NULL)
		return (NULL);
	i = len - 1;
	ft_memset(res, '0', len);
	while (i >= 0)
	{
		res[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
	return (res);
}
