/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <leonorjoaquim98@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:08:22 by Leo               #+#    #+#             */
/*   Updated: 2023/04/27 17:08:22 by Leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putadd(size_t c, int *length)
{
	if (!c)
	{
		ft_putstr("(nil)", length);
	}
	if (c < 16)
	{
		ft_putlstr("0x", length);
		ft_putchar("0123456789abcdef"[c % 16], length);
		return ;
	}
	else
	{
		ft_putadd((c / 16), length);
		ft_putchar("0123456789abcdef"[c % 16], length);
	}
}

void ft_putHEX(long int nr, int *length)
{
	char *HEX = "0123456789ABCDEF";
	if (nr / 16 == 0)
		ft_putchar(HEX[nr % 16], length);
	else
	{
		ft_putHEX(nr / 16, length);
		ft_putchar(HEX[nr % 16], length);
	}
}

void	ft_hexadecimal(unsigned int c, int *length)
{
	long int	nr;
	char *hex = "0123456789abcdef";

	nr = c;

	if(c == 'p')
		ft_putadd(nr, length);
	if(c == 'X')
		ft_putHEX(nr, length);
	if (nr / 16 == 0)
		ft_putchar(hex[nr % 16], length);
	else
	{
		ft_hexadecimal(nr / 16, length);
		ft_putchar(hex[nr % 16], length);
	}
}