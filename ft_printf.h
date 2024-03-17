/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukaminsk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 17:28:31 by ukaminsk          #+#    #+#             */
/*   Updated: 2024/03/10 17:28:34 by ukaminsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int		ft_printf(const char *format, ...);
int	ft_put_d(int i);
int	ft_put_s(char *str);
int	ft_put_c(int c);
int	ft_put_x(int i, int c);
int	ft_put_u(unsigned int u);
int	ft_put_p(void p);
size_t	ft_strlen(const char *s);


#endif
