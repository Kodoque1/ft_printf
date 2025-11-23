/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler_hexa.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:47:07 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/23 21:21:19 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_ito_bigx(va_list l)
{
	unsigned int	n;
	int				size;

	n = (int)va_arg(l, unsigned int);
	size = 0;
	if (n)
		ft_putito_bigx(n, &size);
	else
	{
		ft_putchar_fd('0', 1);
		size = 1;
	}
	return (size);
}

int	printf_itox(va_list l)
{
	unsigned int	n;
	int				size;

	n = (int)va_arg(l, unsigned int);
	size = 0;
	if (n)
		ft_putitox(n, &size);
	else
	{
		ft_putchar_fd('0', 1);
		size = 1;
	}
	return (size);
}

int	printf_pointer(va_list l)
{
	long	n;
	int		size;

	n = (long)va_arg(l, void *);
	size = 2;
	if (n)
	{
		ft_putstr_fd("0x", 1);
		ft_putitox(n, &size);
	}
	else
	{
		ft_putstr_fd("(nil)", 1);
		size = 5;
	}
	return (size);
}
