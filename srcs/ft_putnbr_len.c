/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:32 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:29:20 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_len(int n)
{
	int			digit_len;
	long int	long_n;

	long_n = (long int)n;
	digit_len = 0;
	if (long_n < 0)
	{
		digit_len += ft_putchar_len('-');
		long_n = -long_n;
	}
	ft_put_dec(long_n, &digit_len);
	return (digit_len);
}
