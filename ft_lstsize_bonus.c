/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icchon <icchon@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 04:33:18 by icchon            #+#    #+#             */
/*   Updated: 2024-10-15 04:33:18 by icchon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*node;

	cnt = 0;
	node = lst;
	if (node == NULL)
		return (cnt);
	while (node != NULL)
	{
		node = node->next;
		cnt++;
	}
	return (cnt);
}
