/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:43:11 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/25 13:40:17 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digits_count_b_16(size_t nb)
{
	int	count;

	count = 0;
	if (!nb)
		return (1);
	while (nb)
	{
		count++;
		nb /= 16;
	}
	return (count);
}

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

static void	ft_putnbr_32_hexa(unsigned int nb, char specifier)
{
	if (nb >= 16)
		ft_putnbr_32_hexa(nb / 16, specifier);
	ft_print_remainder(nb % 16, specifier);
}

static void	ft_putnbr_64_hexa(size_t nb, char specifier)
{
	if (nb >= 16)
		ft_putnbr_64_hexa(nb / 16, specifier);
	else
		write(1, "0x", 2);
	ft_print_remainder(nb % 16, specifier);
}

int	ft_putnbr_hexa(size_t nb, char specifier)
{
	int	ret;

	ret = digits_count_b_16(nb);
	if (specifier == 'x' || specifier == 'X')
	{
		ft_putnbr_32_hexa(nb, specifier);
		return (ret);
	}
	ft_putnbr_64_hexa(nb, specifier);
	return (ret + 2);
}
