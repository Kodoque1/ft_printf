/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 23:26:45 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/18 23:33:37 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *input, ...);
void	ft_putitox(unsigned long n, int *size);
void	ft_putito_bigx(unsigned long n, int *size);
int		printf_char(va_list l);
int		printf_string(va_list l);
int		printf_ito_bigx(va_list l);
int		printf_itox(va_list l);
int		printf_pointer(va_list l);
int		printf_decimal(va_list l);
int		printf_unsigned_decimal(va_list l);

#endif
