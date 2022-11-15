/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_Xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 11:44:31 by hmoulard          #+#    #+#             */
/*   Updated: 2022/11/15 14:55:15 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_x(unsigned int nb, int size)
{
	int	i;

	if (nb == 0)
	{
		return (ft_putchar('0'));
	}
	else
		i = ft_gethex_len(nb, "0123456789abcdef");
	if (size == 'x')
	{
		ft_print_base(nb, "0123456789abcdef");
		return (i);
	}
	ft_print_base(nb, "0123456789ABCDEF");
	return (i);
}
