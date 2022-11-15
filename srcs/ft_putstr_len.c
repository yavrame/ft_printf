/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_len.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emarion <emarion@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:21:41 by emarion           #+#    #+#             */
/*   Updated: 2021/11/30 16:27:07 by emarion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr_len(char *s)
{
	int	length;

	if (s == NULL)
	{
		ft_putstr_len("(null)");
		return (6);
	}
	length = 0;
	while (s[length])
		length += ft_putchar_len(s[length]);
	return (length);
}
