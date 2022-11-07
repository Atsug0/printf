/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftpf.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atsug0 <atsug0@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 22:28:23 by atsug0            #+#    #+#             */
/*   Updated: 2022/10/14 01:07:29 by atsug0           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPF
# define LIBFTPF
# include<stdarg.h>
# include<unistd.h>
# include<stdlib.h>

int ft_putchar(char c);
int ft_strlen(char *str);
int ft_putstr(char *str);
int ft_getfonc(char c, va_list args);

#endif