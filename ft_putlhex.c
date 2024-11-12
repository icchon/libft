/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlhex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 00:06:10 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/04 00:06:19 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlhex(unsigned int n)
{
	const char	*hex_elems = "0123456789ABCDEF";
	int			mod;

	if (n < 16)
	{
		ft_putchar(hex_elems[n % 16]);
		return ;
	}
	mod = n % 16;
	ft_putlhex(n / 16);
	ft_putchar(hex_elems[mod]);
	return ;
}
