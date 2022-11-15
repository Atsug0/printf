/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:19:19 by hmoulard          #+#    #+#             */
/*   Updated: 2022/11/15 14:39:11 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_base(unsigned long int nb, char *base)
{
	if (nb == 0)
		return ;
	ft_print_base(nb / 16, base);
	ft_putchar(base[nb % 16]);
}

int	ft_gethex_len(unsigned long int nb, char *base)
{
	if (nb == 0)
		return (0);
	return (1 + ft_gethex_len(nb / 16, base));
}

int	ft_print_p(unsigned long int p)
{
	if (p != 0)
	{
		ft_putstr("0x");
		ft_print_base(p, "0123456789abcdef");
		return (2 + ft_gethex_len(p, "0123456789abcdef"));
	}
	return (ft_putstr("(nil)"));
}
