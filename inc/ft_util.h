/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_util.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:27:05 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/22 15:10:04 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTIL_H
# define UTIL_H

# include <limits.h>
# include <stdarg.h>

int	ft_min(int argn, ...);
int	ft_max(int argn, ...);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_all(char *src, int (*f)(int));
int	ft_any(char *src, int (*f)(int));

#endif