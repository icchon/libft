/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_subvec2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:45:34 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/31 19:05:32 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

t_vector2	ft_sub_vec2(t_vector2 v1, t_vector2 v2)
{
	return (ft_new_vec2(v1.x - v2.x, v1.y - v2.y));
}
