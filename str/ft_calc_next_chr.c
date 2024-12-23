/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc_next_chr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:41:25 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/22 14:57:54 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

int	ft_calc_next_chr(char *str, char c)
{
	char	*s;

	s = ft_strchr(str, c);
	if (s == NULL)
	{
		return (ft_strlen(str));
	}
	return (s - str);
}
