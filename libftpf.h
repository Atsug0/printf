/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpf.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmoulard <hmoulard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:28:23 by atsug0            #+#    #+#             */
/*   Updated: 2022/11/07 16:13:36 by hmoulard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPF_H
# define LIBFTPF_H
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int		ft_putchar(char c);
int		ft_strlen(char *str);
int		ft_putstr(char *str);
int		ft_getfonc(char c, va_list args);
int		ft_getlen(int num);
int		ft_print_p(void *p);
int		ft_print_u(unsigned int nb);
#endif