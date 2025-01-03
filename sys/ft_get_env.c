/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:55:30 by kaisobe           #+#    #+#             */
/*   Updated: 2025/01/04 07:48:59 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sys.h"

char	*ft_get_env(char *key)
{
	extern char	**__environ;
	char		*to_search;
	size_t		len;
	int			i;

	i = 0;
	while (__environ[i])
	{
		to_search = ft_strjoin(key, "=");
		if (!to_search)
			return (NULL);
		if (ft_strncmp(to_search, __environ[i], ft_strlen(to_search)) == 0)
		{
			len = ft_strlen(to_search);
			free(to_search);
			return (__environ[i] + len);
		}
		i++;
	}
	return (NULL);
}
