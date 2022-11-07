/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:19:19 by hmoulard          #+#    #+#             */
/*   Updated: 2022/11/07 15:48:41 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpf.h"

static void	ft_print_base(long int nb, char *base)
{
	if (nb == 0)
		return ;
	ft_print_base(nb / 16, "0123456789abcdef");
	ft_putchar(base[nb % 16]);
}

static int	ft_gethex_len(long int nb, char *base)
{
	if (nb == 0)
		return (0);
	return (1 + ft_gethex_len(nb / 16, "0123456789abcdef"));
}

int	ft_print_p(void *p)
{
	ft_putstr("0x");
	ft_print_base((long int) p, "0123456789abcdef");
	return (2 + ft_gethex_len((long int) p, "0123456789abcdef"));
}
