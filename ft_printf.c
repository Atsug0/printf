/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 21:54:40 by atsug0            #+#    #+#             */
/*   Updated: 2022/10/14 01:09:59 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdarg.h>

int len(int nb) {
    int i;
    
    i = 1;
    while (nb > 0)
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}
int ft_printf(const char *str, ...)
{
    int length;
    va_list args;
    int i;
    
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