/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfonc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:09:51 by atsug0            #+#    #+#             */
/*   Updated: 2022/10/14 01:06:53 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpf.h";
#include<stdarg.h>;
//cspdiuxX%

int    ft_getfonc(char c, va_list args)
{
    if (c == 'c')
        return ft_putchar(va_arg(args, char));
    if (c == 's')
        return ft_putstr(va_arg(args, char *));
    if (c == 'p')
    //0xplus hexa
    if (c == 'd' || c == 'i')
    //putnbr
    if (c == 'u')
    //itoa unsigned int
    if (c == 'x' || c == 'X')
    //hexa avec maj et min
    if (c == '%')
        return ft_putchar('%');
        
}