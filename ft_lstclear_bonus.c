/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icchon <icchon@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 04:43:10 by icchon            #+#    #+#             */
/*   Updated: 2024-10-15 04:43:10 by icchon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*next;

	node = *lst;
	while (node != NULL)
	{
		del(node->content);
		next = node->next;
		free(node);
		node = next;
	}
	*lst = NULL;
	return ;
}

// void	ft_lstadd_front(t_list **lst, t_list *new)
// {
// 	new->next = *lst;
// 	*lst = new;
// 	return ;
// }

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*node;

// 	node = (t_list *)malloc(sizeof(t_list) * 1);
// 	node->content = content;
// 	node->next = NULL;
// 	return (node);
// }

// int	main(void)
// {
// 	t_list	*l;

// 	l = ft_lstnew(malloc(1));
// 	for (int i = 0; i < 10; ++i)
// 		ft_lstadd_front(&l, ft_lstnew(malloc(1)));
// 	ft_lstclear(&l, free);
// 	printf("%d\n", l == 0);
// 	write(1, "\n", 1);
// 	return (0);
// }
