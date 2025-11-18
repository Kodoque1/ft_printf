/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:47:07 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/17 17:01:11 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_ito_bigx(va_list l)
{
	int	n;
	int	size;

	n = (int)va_arg(l, int);
	size = 0;
	ft_putito_bigx(n, &size);
	return (size);
}

int	printf_itox(va_list l)
{
	int	n;
	int	size;

	n = (int)va_arg(l, int);
	size = 0;
	ft_putito_bigx(n, &size);
	return (size);
}

int	printf_pointer(va_list l)
{
	long	n;
	int		size;

	n = (long)va_arg(l, void *);
	size = 2;
	ft_putstr_fd("0x", 1);
	ft_putito_bigx(n, &size);
	return (size);
}
