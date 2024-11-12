/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icchon <icchon@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-14 08:15:04 by icchon            #+#    #+#             */
/*   Updated: 2024-10-14 08:15:04 by icchon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
