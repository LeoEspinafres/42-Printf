/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:04:18 by lcampos-          #+#    #+#             */
/*   Updated: 2023/05/02 16:12:49 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_everyfunction(va_list arg, char c, int *length)
{
	if (c == 'c')
		ft_putchar(va_arg(arg, int), length);
	if (c == 's')
		ft_putstr(va_arg(arg, char *), length);
	if (c == 'd')
		ft_putnbr(va_arg(arg, int), length);
	if (c == 'i')
		ft_putnbr(va_arg(arg, int), length);
	if (c == 'u')
		ft_putnbr(va_arg(arg, unsigned int), length);
	if (c == 'x')
		ft_smallhexadecimal(va_arg(arg, unsigned int), length);
	if (c == 'X')
		ft_bighexadecimal(va_arg(arg, unsigned int), length);
	if (c == 'p')
		ft_putaddress(va_arg(arg, size_t), length);
	if (c == '%')
		ft_putchar('%', length);
}

int	ft_printf(const char *data, ...)
{
	int		i;
	int		length;
	va_list	arg;

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
