/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:03:57 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/17 16:03:59 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_p_rec(uintptr_t n, char *hex, int len)
{
	if (n <= 15)
		len += ft_put_c(hex[n % 16]);
	else
	{
		len = ft_put_p_rec(n / 16, hex, len);
		len += ft_put_c(hex[n % 16]);
	}
	return (len);
}

int	ft_put_p(void *p)
{
	uintptr_t	n;
	char		*hex;

	if (!p)
		return (ft_put_s("(nil)"));
	n = (uintptr_t)p;
	hex = "0123456789abcdef";
	ft_put_s("0x");
	return (ft_put_p_rec(n, hex, 2));
}
