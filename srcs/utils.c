/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:45 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:25:57 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_conv_inthex_put_len(unsigned long int n, int *len, char up_low_case)
{
	if (n > 15)
	{
		ft_conv_inthex_put_len(n / 16, len, up_low_case);
		ft_conv_inthex_put_len(n % 16, len, up_low_case);
	}
	else
	{
		if (n / 10)
			ft_putchar_len((n % 10) + up_low_case);
		else
			ft_putchar_len(n + '0');
		*len = *len + 1;
	}
}

void	ft_put_dec(long int n, int *len)
{
	if (n > 9)
	{
		ft_put_dec(n / 10, len);
		ft_put_dec(n % 10, len);
	}
	else
	{
		ft_putchar_len(n + '0');
		*len = *len + 1;
	}
}
