/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_invquat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/31 09:50:37 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/31 11:11:27 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_quat.h"

t_quat	ft_inv_quat(t_quat q)
{
	return (ft_normalize_quat(ft_conjugate_quat(q)));
}