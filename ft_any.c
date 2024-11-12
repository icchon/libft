/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 09:27:22 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/12 09:34:21 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_any(char *src, int (*f)(int))
{
	int	i;

	i = 0;
	while (src[i])
	{
		if ((*f)(src[i]))
		{
			return (1);
		}
		i++;
	}
	return (0);
}
