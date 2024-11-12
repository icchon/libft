/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_chain.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 18:57:38 by kaisobe           #+#    #+#             */
/*   Updated: 2024/11/10 18:51:56 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_create_chain(char c, int n)
{
	char	*out;

	out = (char *)ft_calloc(n + 1, sizeof(char));
	ft_memset(out, c, n);
	return (out);
}
