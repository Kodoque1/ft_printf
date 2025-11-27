/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:47:29 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/27 22:34:41 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	init_fun_tab(int (*g_fun_tab[256])(va_list l))
{
	g_fun_tab['c'] = printf_char;
	g_fun_tab['s'] = printf_string;
	g_fun_tab['d'] = printf_decimal;
	g_fun_tab['i'] = printf_decimal;
	g_fun_tab['u'] = printf_unsigned_decimal;
	g_fun_tab['x'] = printf_itox;
	g_fun_tab['X'] = printf_ito_bigx;
	g_fun_tab['p'] = printf_pointer;
}

int	is_valid_option(char c)
{
	char	*valid;
	int		i;

	valid = "cspdiuxX";
	i = 0;
	while (valid[i])
	{
		if (valid[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	handle_args(char c, va_list l, int (*g_fun_tab[256])(va_list l))
{
	int	n;

	n = -1;
	if (c && is_valid_option(c))
		n = g_fun_tab[(int)c](l);
	else if (c && (c == '%'))
	{
		ft_putchar_fd(c, 1);
		n = 1;
	}
	return (n);
}

int	process_string(const char *str, va_list l, int (*g_fun_tab[256])(va_list l))
{
	int			sum;
	int			i;
	int			n;

	sum = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			n = handle_args(str[i + 1], l, g_fun_tab);
			if (n == -1)
				return (-1);
			i++;
			sum += n;
		}
		else
		{
			ft_putchar_fd(str[i], 1);
			sum++;
		}
		i++;
	}
	return (sum);
}

int	ft_printf(const char *input, ...)
{
	va_list		args;
	int			sum;
	static int	(*g_fun_tab[256])(va_list l) = {NULL};

	if (input == NULL)
		return (-1);
	sum = 0;
	init_fun_tab(g_fun_tab);
	va_start(args, input);
	sum = process_string(input, args, g_fun_tab);
	va_end(args);
	return (sum);
}
