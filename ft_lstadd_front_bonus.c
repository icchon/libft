/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icchon <icchon@student.42.fr>              #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024-10-15 01:29:26 by icchon            #+#    #+#             */
/*   Updated: 2024-10-15 01:29:26 by icchon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
	return ;
}

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
// 	t_list *l = NULL;
// 	ft_lstadd_front(&l, ft_lstnew((void *)1));
// 	printf("%d\n", l->content == (void *)1);
// 	printf("%d\n", (l->next == 0));

// 	ft_lstadd_front(&l, ft_lstnew((void *)2));
// 	printf("%d\n", l->content == (void *)2);
// 	printf("%d\n", ((t_list *)l->next)->content == (void *)1);
// 	printf("%d\n", ((t_list *)l->next)->next == 0);

// 	write(1, "\n", 1);
// 	return (0);
// }