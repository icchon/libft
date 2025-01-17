/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addvec2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:45:09 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/31 18:52:22 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vec.h"

t_vector2	ft_add_vec2(t_vector2 v1, t_vector2 v2)
{
	return (ft_new_vec2(v1.x + v2.x, v1.y + v2.y));
}
