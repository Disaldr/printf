/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:26 by eanastas          #+#    #+#             */
/*   Updated: 2022/01/11 23:11:51 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

int	ft_printf(const char *input, ...);
int	check_arg(va_list *ap, const char *input, int i);
int	ft_print_char(int c);
int	ft_print_string(char *str);
int	ft_print_int(int x);
int	ft_print_uint(unsigned int num);
int	ft_print_hex(unsigned int num, int flag);
int	ft_print_pointer(unsigned long int num);
int	ft_print_percent(void);
int	printf_base16_util(unsigned long num, int len, int flag);

#endif