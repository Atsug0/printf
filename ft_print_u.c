/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:03:05 by hmoulard          #+#    #+#             */
/*   Updated: 2022/11/07 16:19:28 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpf.h"

static void	ft_put_unsigned(unsigned int nb)
{
	if (nb > 9)
		ft_put_unsigned(nb / 10);
	ft_putchar((nb % 10) + '0');
}

int	ft_print_u(unsigned int nb)
{
	int	i;

	i = 1;
	ft_put_unsigned(nb);
	while (nb > 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}
