/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_io.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 13:56:41 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/23 23:56:44 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IO_H
# define FT_IO_H

# include "ft_printf.h"
# include <unistd.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr(int n);
void	ft_putshex(unsigned int n);
void	ft_putlhex(unsigned int n);
void	ft_putchar(int c);
void	ft_putstr(char *s);
void	ft_print_arr(int *arr, int n);

#endif