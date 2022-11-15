/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfonc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:09:51 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/15 14:55:40 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include<limits.h>

int	ft_getfonc(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_print_p((long unsigned int)va_arg(args, long unsigned int)));
	if (c == 'd' || c == 'i')
		return (ft_getlen(va_arg(args, int)));
	if (c == 'u')
		return (ft_print_u(va_arg(args, unsigned int)));
	if (c == 'x' || c == 'X')
		return (
			ft_print_x((unsigned int)va_arg(args, unsigned int), c));
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
