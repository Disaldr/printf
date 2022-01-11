/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmumm <kmumm@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:49:23 by eanastas          #+#    #+#             */
/*   Updated: 2022/01/11 22:45:50 by kmumm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *input, ...)
{
	int		len;
	int		i;
	int		add;
	va_list	ap;

	len = 0;
	i = 0;
	va_start (ap, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			len += check_arg(&ap, input, i);
			i += 2;
		}
		else
		{
			write(1, &input[i++], 1);
			++len;
		}
	}
	va_end (ap);
	return (len);
}

int	check_arg(va_list *ap, const char *input, int i)
{
	char	c;

	c = (char)input[i + 1];
	if (c == 'c')
		return (ft_print_char(va_arg(*ap, int)));
	if (c == 's')
		return (ft_print_string(va_arg(*ap, char *)));
	if (c == 'p')
	{
		write(1, "0x", 2);
		return (ft_print_pointer(va_arg(*ap, unsigned long int)) + 2);
	}
	if (c == 'd' || c == 'i')
		return (ft_print_int(va_arg(*ap, int)));
	if (c == 'u')
		return (ft_print_uint(va_arg(*ap, unsigned int)));
	if (c == 'x')
		return (ft_print_hex(va_arg(*ap, int), 0));
	if (c == 'X')
		return (ft_print_hex(va_arg(*ap, int), 1));
	if (c == '%')
		return (ft_print_percent());
	return (0);
}
