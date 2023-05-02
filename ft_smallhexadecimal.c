/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_smallhexadecimal.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:05:04 by lcampos-          #+#    #+#             */
/*   Updated: 2023/05/02 15:34:58 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_smallhexadecimal(unsigned int c, int *length)
{
	long int	nr;
	char		*hex;

	hex = "0123456789abcdef";
	nr = c;
	if (nr / 16 == 0)
		ft_putchar(hex[nr % 16], length);
	else
	{
		ft_smallhexadecimal(nr / 16, length);
		ft_putchar(hex[nr % 16], length);
	}
}
