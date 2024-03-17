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

static int	int_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void ft_put_d_rec(int n)
{
	if (n == -2147483648)
		ft_put_s("-2147483648");
	else if (n < 0)
	{
		ft_put_c('-');
		ft_put_d_rec(-n);
	}
	else if (n >= 10)
	{
		ft_put_d_rec(n / 10);
		ft_put_c(n % 10 + '0');
	}
	else
		ft_put_c(n + '0');
}

int	ft_put_d(int n)
{
	ft_print_d(n);
	return (int_len(n));
}
