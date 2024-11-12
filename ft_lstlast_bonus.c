/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icchon <icchon@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 04:35:13 by icchon            #+#    #+#             */
/*   Updated: 2024-10-15 04:35:13 by icchon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list) * 1);
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*node;

	if (lst == NULL)
		return (lst);
	node = lst;
	while (node->next != NULL)
	{
		node = node->next;
	}
	return (node);
}

// int	main(void)
// {
// 	t_list	*l;

// 	l = NULL;
// 	printf("%d\n", ft_lstlast(l) == 0);
// 	ft_lstadd_back(&l, ft_lstnew((void *)1));
// 	printf("%d\n", ft_lstlast(l)->content == (void *)1);
// 	ft_lstadd_back(&l, ft_lstnew((void *)2));
// 	printf("%d\n", ft_lstlast(l)->content == (void *)2);
// 	printf("%d\n", ft_lstlast(l)->next == 0);
// 	write(1, "\n", 1);
// 	return (0);
// }
