/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 00:51:00 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/15 13:07:25 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	if (str != NULL)
	{
		write(1, str, ft_strlen(str));
		return (ft_strlen(str));
	}
	write(1, "(null)", 6);
	return (6);
}
