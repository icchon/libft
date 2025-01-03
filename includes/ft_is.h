/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:02:20 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/25 15:26:56 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# include <limits.h>
# include <stdarg.h>

int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int	ft_ismatch(int x, int argn, ...);
int	ft_ischain(char *src, char c);
int	ft_issign(int c);
int	ft_isspace(int c);
int	ft_isint(const char *nptr);
int	ft_isinrange(int x, int left, int right);

#endif