/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:47:16 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/17 17:02:25 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putitox(unsigned long n, int *size)
{
	int	nibble;

	if (n)
	{
		ft_putitox(n >> 4, size);
		nibble = n & 0xF;
		if (nibble < 10)
			ft_putchar_fd('0' + nibble, 1);
		else
			ft_putchar_fd('a' + (nibble - 10), 1);
		(*size)++;
	}
}

void	ft_putito_bigx(unsigned long n, int *size)
{
	int	nibble;

	if (n)
	{
		ft_putito_bigx(n >> 4, size);
		nibble = n & 0xF;
		if (nibble < 10)
			ft_putchar_fd('0' + nibble, 1);
		else
			ft_putchar_fd('A' + (nibble - 10), 1);
		(*size)++;
	}
}
