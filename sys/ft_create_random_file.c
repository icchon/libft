/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_random_file.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 07:38:02 by kaisobe           #+#    #+#             */
/*   Updated: 2025/01/04 08:33:44 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sys.h"

char	*ft_create_random_file(char *extension)
{
	char		*out;
	char		*tmp;
	u_int32_t	rand;

	rand = ft_rand_u32(ft_generate_seed());
	tmp = ft_utoa(rand);
	if (!tmp)
		return (NULL);
	if (extension)
	{
		out = ft_strjoin(tmp, extension);
		free(tmp);
	}
	else
		out = tmp;
	if (ft_path_exist(out))
	{
		free(out);
		return (ft_create_random_file(extension));
	}
	if (ft_create_file(out) == -1)
		return (NULL);
	return (out);
}
