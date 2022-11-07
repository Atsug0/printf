/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfonc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:09:51 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/07 15:44:50 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpf.h";
#include <stdarg.h>;
//cspdiuxX%

int	ft_getfonc(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, char)));
	if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (c == 'p')
		return (ft_print_p((va_arg(args, void *))));
	if (c == 'd' || c == 'i')
		return (ft_getlen(va_arg(args, int)));
	if (c == 'u')
	//itoa unsigned int
	if (c == 'x' || c == 'X')
	//hexa avec maj et min
	if (c == '%')
		return (ft_putchar('%'));
	return (0);
}
