/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcampos- <lcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:01:09 by lcampos-          #+#    #+#             */
/*   Updated: 2023/05/02 16:05:54 by lcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *data, ...);
void	ft_putchar(int c, int *length);
void	ft_putstr(char *c, int *length);
void	ft_putnbr(long c, int *length);
void	ft_putaddress(size_t c, int *length);
void	ft_smallhexadecimal(unsigned int c, int *length);
void	ft_bighexadecimal(long int c, int *length);

#endif