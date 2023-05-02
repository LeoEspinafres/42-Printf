/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Leo <leonorjoaquim98@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:03:56 by Leo               #+#    #+#             */
/*   Updated: 2023/04/27 16:03:56 by Leo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_putunsignednbr(unsigned int c, int *length)
{
	if (c > 9)
	{
		ft_putunsignednbr(c / 10, length);
		ft_putunsignednbr(c % 10, length);
	}
	else
		ft_putchar((c + '0'), length);

}

void	ft_putnbr(int c, int *length)
{
	if (c == 'u')
		ft_putunsignednbr(c, length);
	
	if(c == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (c < 0)
	{
		ft_putchar('-', length);
		c *= -1;
	}
	if (c > 9)
	{
		ft_putnbr((c / 10), length);
		ft_putnbr((c % 10), length);
	}
	else
		ft_putchar((c + '0'), length);
}