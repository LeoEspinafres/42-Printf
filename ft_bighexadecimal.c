/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bighexadecimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:28:09 by lcampos-          #+#    #+#             */
/*   Updated: 2023/05/02 15:33:57 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_bighexadecimal(long int c, int *length)
{
	char	*bighex;

	bighex = "0123456789ABCDEF";
	if (c / 16 == 0)
		ft_putchar(bighex[c % 16], length);
	else
	{
		ft_bighexadecimal(c / 16, length);
		ft_putchar(bighex[c % 16], length);
	}
}
