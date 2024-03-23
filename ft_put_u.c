/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 16:03:17 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/17 16:03:21 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_u_rec(unsigned int n, int len)
{
	if (n <= 9)
		len += ft_put_c(n % 10 + '0');
	else
	{
		len = ft_put_u_rec(n / 10, len);
		len += ft_put_c(n % 10 + '0');
	}
	return (len);
}

int	ft_put_u(unsigned int n)
{
	return (ft_put_u_rec(n, 0));
}
