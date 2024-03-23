/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:03:08 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/17 16:03:11 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex_rec(unsigned int n, char *hex, int len)
{
	if (n <= 15)
		len += ft_put_c(hex[n % 16]);
	else
	{
		len = ft_put_hex_rec(n / 16, hex, len);
		len += ft_put_c(hex[n % 16]);
	}
	return (len);
}

int	ft_put_x(unsigned int n, int c)
{
	char	*hex;

	if (c == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	return (ft_put_hex_rec(n, hex, 0));
}
