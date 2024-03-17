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

static int hex_len(int n)
{
	int	i;

	while (i)
	{
		n /= 16;
		i++;
	}
	return (i);
}

int	ft_put_x(int n, int c)
{
	char *base;
	
	if (c == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (i > 0)
	print_hex(n, hex);
	return hex_len(n);
}
