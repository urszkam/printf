/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:34:28 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/17 15:34:32 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t ui_len(unsigned int n, int base)
{
	size_t	i;
    
    if (n == 0)
        return (1);
    i = 0;
	while (n)
	{
		n /= base;
		i++;
	}
	return (i);
}