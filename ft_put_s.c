/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:38:55 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/17 15:38:58 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	ft_put_s(char *str)
{
	int	len;

	if (!str)
		str = "(null)";
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}
