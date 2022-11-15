/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:37 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:20:41 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putptr_len(unsigned long int n)
{
	int	ptr_len;

	ptr_len = 0;
	ft_putstr_len("0x");
	ft_conv_inthex_put_len(n, &ptr_len, 'a');
	return (ptr_len + 2);
}
