/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsnbr_len.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:26:23 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:28:47 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putunsnbr_len(unsigned int n)
{
	int	digit_len;

	digit_len = 0;
	ft_put_dec(n, &digit_len);
	return (digit_len);
}
