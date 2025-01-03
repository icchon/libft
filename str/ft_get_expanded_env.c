/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_expanded_env.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 13:56:07 by kaisobe           #+#    #+#             */
/*   Updated: 2025/01/03 13:56:16 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	**ft_get_expanded_env(char *key, char sep)
{
	char	*value;
	char	**expanded_env;

	value = ft_get_env(key);
	if (!value)
		return (NULL);
	expanded_env = ft_split(value, sep);
	if (!expanded_env)
		return (NULL);
	return (expanded_env);
}
