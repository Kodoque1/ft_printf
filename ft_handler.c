/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:46:58 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/17 17:00:47 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printf_char(va_list l)
{
	ft_putchar_fd((char)va_arg(l, int), 1);
	return (1);
}

int	printf_string(va_list l)
{
	char	*str;

	str = (char *)va_arg(l, char *);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	printf_decimal(va_list l)
{
	int		n;
	char	*str;

	n = va_arg(l, int);
	str = ft_itoa(n);
	if (str == NULL)
		return (-1);
	ft_putstr_fd(str, 1);
	n = ft_strlen(str);
	free(str);
	return (n);
}

int	printf_unsigned_decimal(va_list l)
{
	unsigned int	n;
	char			*str;

	n = va_arg(l, unsigned int);
	str = ft_itoa(n);
	if (str == NULL)
		return (-1);
	ft_putstr_fd(str, 1);
	n = ft_strlen(str);
	free(str);
	return (n);
}
