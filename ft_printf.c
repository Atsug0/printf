/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:54:40 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/15 12:06:31 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include<stdarg.h>

int	ft_printf(const char *str, ...)
{
	int		length;
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	length = 0;
	while (str[i])
	{
		if (str[i] == '%')
			length += ft_getfonc(str[++i], args);
		else
			length += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (length);
}
