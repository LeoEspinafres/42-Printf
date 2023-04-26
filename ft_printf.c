/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:04:18 by lcampos-          #+#    #+#             */
/*   Updated: 2023/04/26 23:15:45 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_everyfunction(va_list arg, char c, int *length)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int), length);
	if (c == 's')
		ft_putstr(va_arg(arg, char *), length);
	if (c == 'd' || c == 'i' || c == 'u')
		ft_putnbr(va_arg(arg, size_t), length);
	// if (c == 'p')
	// 	ft_hexadecimal(c);
	// if (c == 'x')
	// 	ft_hexadecimal( c);
	// if (c == 'X')
	// 	ft_hexadecimal( c);
	if (c == '%')
		ft_putchar('%', length);
}

int	ft_printf(const char *data, ...)
{
	int i;
	int length;
	va_list arg;

	i = 0;
	length = 0;
	va_start(arg, data);
	while (data[i] != '\0')
	{
		if (data[i] == '%')
			ft_everyfunction(arg, data[++i], &length);
		else if (data[i] != '%')
			ft_putchar(data[i], &length);
		i++;
	}
	va_end(arg);
	return (length);
}