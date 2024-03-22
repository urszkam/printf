/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:28:23 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/10 17:28:26 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_arg(va_list args, int c)
{
	int	i;

	i = -1;
	if (c == 'c')
		i = ft_put_c(va_arg(args, int));
	else if (c == 's')
		i = ft_put_s(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		i = ft_put_d(va_arg(args, int));
	else if (c == 'x' || c == 'X')
		i = ft_put_x(va_arg(args, unsigned int), c);
	else if (c == 'p')
		i = ft_put_p(va_arg(args, void *));
	else if (c == 'u')
		i = ft_put_u(va_arg(args, unsigned int));
	else if (c == '%')
		i = ft_put_c(c);
	return (i);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			len += ft_print_arg(args, *(++format));
		}
		else
			len += ft_put_c(*format);
		format++;
	}
	va_end(args);
	return (len);
}
