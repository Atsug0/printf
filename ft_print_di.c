/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:38:27 by hmoulard          #+#    #+#             */
/*   Updated: 2022/11/07 15:14:58 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftpf.h"

static void	ft_putnbr(int num)
{
	unsigned int	n;

	if (num < 0)
	{
		ft_putchar('-');
		n = -num;
	}
	else
		n = num;
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int	ft_getlen(int num)
{
	int				i;
	unsigned int	n;

	i = 1;
	if (num < 0)
	{
		i++;
		n = -num;
	}
	else
		n = num;
	while (n > 10)
	{
		n = n / 10;
		i++;
	}
	ft_putnbr(num);
	return (i);
}
