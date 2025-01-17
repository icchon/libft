/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_absolute_path.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:57:47 by kaisobe           #+#    #+#             */
/*   Updated: 2025/01/07 20:30:10 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sys.h"

char	*ft_get_absolute_path(char *relative_path, char **env)
{
	char	**expanded_path;
	int		i;
	char	*path;

	expanded_path = ft_get_expanded_path(env);
	if (!expanded_path)
		return (NULL);
	i = 0;
	while (expanded_path[i])
	{
		path = ft_join_path(expanded_path[i], relative_path);
		if (ft_path_exist(path))
		{
			ft_free_strs(expanded_path);
			return (path);
		}
		free(path);
		i++;
	}
	ft_free_strs(expanded_path);
	if (ft_path_exist(relative_path))
		return (ft_strdup(relative_path));
	return (NULL);
}
