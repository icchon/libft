/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaisobe <kaisobe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:14:00 by kaisobe           #+#    #+#             */
/*   Updated: 2024/12/22 14:50:51 by kaisobe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUM_H
# define FT_NUM_H

# include <inttypes.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>

char	*ft_utoa(unsigned int n);
char	*ft_itoa(int n);
char	*ft_itolhex(uintptr_t n);
char	*ft_itoshex(uintptr_t n);
char	*ft_precisely_itoa(int n, int precision);
char	*ft_precisely_utoa(unsigned int n, int precision);
char	*ft_precisely_itolhex(uintptr_t n, int precision);
char	*ft_precisely_itoshex(uintptr_t n, int precision);
int		ft_get_digit_cnt(uintptr_t n, unsigned int base);

#endif