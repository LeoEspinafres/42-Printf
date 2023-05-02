/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:22:56 by lcampos-          #+#    #+#             */
/*   Updated: 2023/05/02 16:23:32 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putaddress(size_t c, int *length)
{
	if (!c)
	{
		*length += write(1, "(nil)", 5);
	}
	else if (c < 16)
	{
		ft_putstr("0x", length);
		ft_putchar("0123456789abcdef"[c % 16], length);
		return ;
	}
	else
	{
		ft_putaddress((c / 16), length);
		ft_putchar("0123456789abcdef"[c % 16], length);
	}
}
