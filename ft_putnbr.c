/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:04:40 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/04 02:31:41 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long long	buff;

	buff = (long long)n;
	if (buff < 0)
	{
		ft_putchar('-');
		buff *= -1;
	}
	if (buff >= 10)
	{
		ft_putnbr(buff / 10);
	}
	ft_putchar((buff % 10) + '0');
	return ;
}
