/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 08:15:04 by icchon            #+#    #+#             */
/*   Updated: 2024/12/22 13:59:53 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_io.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long	buff;

	buff = (long long)n;
	if (buff < 0)
	{
		ft_putchar_fd('-', fd);
		buff *= -1;
	}
	if (buff >= 10)
	{
		ft_putnbr_fd(buff / 10, fd);
	}
	ft_putchar_fd((buff % 10) + '0', fd);
	return ;
}
