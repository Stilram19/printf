/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:43:11 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:39:07 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_remainder(char remainder, char alpha_case)
{
	if (remainder <= 9)
	{
		ft_putchar(remainder + 48);
		return ;
	}
	if (alpha_case == 'X')
	{
		ft_putchar(remainder + 55);
		return ;
	}
	ft_putchar(remainder + 87);
}

int	ft_putnbr_32_hexa(unsigned int nb, char specifier)
{
	static int	digits_count;

	digits_count++;
	if (nb >= 16)
		ft_putnbr_32_hexa(nb / 16, specifier);
	ft_print_remainder(nb % 16, specifier);
	return (digits_count);
}

int	ft_putnbr_64_hexa(size_t nb, char specifier)
{
	static int	digits_count;

	digits_count++;
	if (nb >= 16)
		ft_putnbr_64_hexa(nb / 16, specifier);
	else
		digits_count += write(1, "0x", 2);
	ft_print_remainder(nb % 16, specifier);
	return (digits_count);
}
