/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:27 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:07:09 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex_len(unsigned int n, char up_low_case)
{
	int	hex_len;

	hex_len = 0;
	if (up_low_case == 'X')
		up_low_case = 'A';
	else
		up_low_case = 'a';
	ft_conv_inthex_put_len(n, &hex_len, up_low_case);
	return (hex_len);
}
