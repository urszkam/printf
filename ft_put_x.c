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

static void ft_put_hex_rec(unsigned int n, char *hex)
{
	if (n <= 15)
		ft_put_c(hex[n % 16]);
	else
	{
		ft_put_hex_rec(n / 16, hex);
		ft_put_c(hex[n % 16]);
	}
}

int	ft_put_x(unsigned int n, int c)
{
	char *hex;
	
	if (c == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	ft_put_hex_rec(n, hex);
	return (ui_len(n, 16));
}
