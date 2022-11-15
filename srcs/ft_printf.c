/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:19 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:27:26 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_def_arg_format(char arg_format, va_list argp)
{
	int	length;

	length = 0;
	if (arg_format == 'c')
		length += ft_putchar_len(va_arg(argp, int));
	else if (arg_format == 's')
		length += ft_putstr_len(va_arg(argp, char *));
	else if (arg_format == 'p')
		length += ft_putptr_len(va_arg(argp, unsigned long int));
	else if (arg_format == 'd' || arg_format == 'i')
		length += ft_putnbr_len(va_arg(argp, int));
	else if (arg_format == 'u')
		length += ft_putunsnbr_len(va_arg(argp, unsigned int));
	else if (arg_format == 'x' || arg_format == 'X')
		length += ft_puthex_len(va_arg(argp, unsigned int), arg_format);
	else if (arg_format == '%')
		length += ft_putchar_len('%');
	return (length);
}

int	ft_parser(const char *fmt, va_list ap)
{
	int	length;

	length = 0;
	while (*fmt)
	{
		if (*fmt == '%')
			length += ft_def_arg_format(*++fmt, ap);
		else
			length += ft_putchar_len(*fmt);
		fmt ++;
	}
	return (length);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		length;

	va_start(ap, fmt);
	length = ft_parser(fmt, ap);
	va_end(ap);
	return (length);
}
