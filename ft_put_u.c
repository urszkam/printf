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

static void ft_put_u_rec(unsigned int n)
{
	if (n <= 9)
		ft_put_c(n % 10 + '0');
	else
	{
		ft_put_u_rec(n / 10);
		ft_put_c(n % 10 + '0');
	}
}

int	ft_put_u(unsigned int n)
{
	ft_put_u_rec(n);
	return (ui_len(n, 10));
}