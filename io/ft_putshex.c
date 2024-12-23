/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putshex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:05:43 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/22 14:00:04 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putshex(unsigned int n)
{
	const char	*hex_elems = "0123456789abcdef";
	int			mod;

	if (n < 16)
	{
		ft_putchar(hex_elems[n % 16]);
		return ;
	}
	mod = n % 16;
	ft_putshex(n / 16);
	ft_putchar(hex_elems[mod]);
	return ;
}
