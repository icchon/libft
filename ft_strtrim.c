/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 07:14:19 by icchon            #+#    #+#             */
/*   Updated: 2024/11/09 11:46:53 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	int		start_idx;
	int		end_idx;
	int		length;
	int		i;

	start_idx = 0;
	end_idx = ft_strlen(s1) - 1;
	while (ft_contain((char *)set, s1[start_idx]))
		start_idx++;
	while (ft_contain((char *)set, s1[end_idx]))
		end_idx--;
	length = ft_max(2, 0, (end_idx - start_idx + 1));
	res = (char *)malloc(sizeof(char) * (length + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start_idx + i <= end_idx)
	{
		res[i] = s1[start_idx + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
