/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 23:13:20 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/27 12:54:47 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	size_of_int(unsigned int n)
{
	int	i;

	if (n == 0)
		return (1);
	else
		i = 0;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_uitoa(unsigned int n)
{
	int				len;
	unsigned long	l;
	char			*buf;

	len = size_of_int(n);
	l = n;
	buf = (char *)malloc(sizeof(char) * (len + 1));
	if (buf == NULL)
		return (NULL);
	buf[len] = '\0';
	len--;
	while (len >= 0)
	{
		buf[len] = (l % 10) + '0';
		l = l / 10;
		len--;
	}
	return (buf);
}
