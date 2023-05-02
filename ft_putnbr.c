/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:12:02 by lcampos-          #+#    #+#             */
/*   Updated: 2023/05/02 16:13:24 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long c, int *length)
{
	if (c < 0)
	{
		ft_putchar('-', length);
		c *= -1;
	}
	if (c > 9)
	{
		ft_putnbr(c / 10, length);
		ft_putnbr(c % 10, length);
	}
	else
		ft_putchar(c + '0', length);
}
