/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:27:05 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/25 13:13:51 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTIL_H
# define FT_UTIL_H

# include <limits.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_min(int argn, ...);
int		ft_max(int argn, ...);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_all(char *src, int (*f)(int));
int		ft_any(char *src, int (*f)(int));
int		ft_swap(void *a, void *b, size_t n);
void	ft_exfree(int argn, ...);
void	ft_setval(int *ptr, int val);

#endif