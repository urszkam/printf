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

static int ptr_len(uintptr_t n)
{
	int	i;
    
    if (n == 0)
        return (1);
    i = 0;
	while (n)
	{
		n /= 16;
		i++;
	}
	return (i);
}

static void ft_put_p_rec(uintptr_t n, char *hex)
{
	if (n <= 15)
		ft_put_c(hex[n % 16]);
	else
	{
		ft_put_p_rec(n / 16, hex);
		ft_put_c(hex[n % 16]);
	}
}

int	ft_put_p(void *p)
{
    uintptr_t n;
    char *hex;
    
    if (!p)
        return(ft_put_s("(nil)"));
    n = (uintptr_t) p;
    hex = "0123456789abcdef";
    ft_put_s("0x");
	ft_put_p_rec(n, hex);
	return (2 + ptr_len(n));
}