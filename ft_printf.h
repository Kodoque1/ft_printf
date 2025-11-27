/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaddi <zaddi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 23:26:45 by zaddi             #+#    #+#             */
/*   Updated: 2025/11/27 13:01:51 by zaddi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
void	ft_bzero(void *s, size_t n);
void	ft_putitox(unsigned long n, int *size);
void	ft_putito_bigx(unsigned long n, int *size);
int		printf_char(va_list l);
int		printf_string(va_list l);
int		printf_ito_bigx(va_list l);
int		printf_itox(va_list l);
int		printf_pointer(va_list l);
int		printf_decimal(va_list l);
int		printf_unsigned_decimal(va_list l);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *c, int fd);
char	*ft_itoa(int n);
char	*ft_uitoa(unsigned int n);
int		ft_strlen(char const *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);

#endif
