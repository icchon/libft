/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:49:26 by icchon            #+#    #+#             */
/*   Updated: 2024/11/09 07:14:07 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;
	size_t	i;

	if (len == 0)
	{
		if (needle[0] == '\0')
			return ((char *)haystack);
		return (NULL);
	}
	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (i + needle_len <= (size_t)ft_min(2, haystack_len, len) && i < len)
	{
		if (ft_strncmp(haystack + i, needle, needle_len) == 0)
		{
			return ((char *)(haystack + i));
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char *s1 = "oh no not the empty string !";
// 	char *s2 = "";
// 	size_t max = 0;

// 	// char *i1 = strnstr(s1, s2, max);
// 	char *i2 = ft_strnstr(s1, s2, max);
// 	// printf("%s\n", i1);
// 	printf("%s\n", i2);
// 	return (0);
// }