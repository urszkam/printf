/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:39:05 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/17 15:39:07 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_d_rec(int n, int len)
{
	if (n == -2147483648)
	{
		len += ft_put_s("-2147483648");
		return (len);
	}
	else if (n < 0)
	{
		len += ft_put_c('-');
		len = ft_put_d_rec(-n, len);
	}
	else if (n >= 10)
	{
		len = ft_put_d_rec(n / 10, len);
		len += ft_put_c(n % 10 + '0');
	}
	else
		len += ft_put_c(n + '0');
	return (len);
}

int	ft_put_d(int n)
{
	return (ft_put_d_rec(n, 0));
}
