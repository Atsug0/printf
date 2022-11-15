/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:28:23 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/15 14:55:24 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int		ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_getfonc(char c, va_list args);
int		ft_getlen(int num);
int		ft_print_p(unsigned long int p);
int		ft_print_u(unsigned int nb);
int		ft_print_x(unsigned int nb, int size);
int		ft_gethex_len(unsigned long int nb, char *base);
int		ft_printf(const char *str, ...);
void	ft_print_base(unsigned long int nb, char *base);

#endif