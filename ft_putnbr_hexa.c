/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:43:11 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 14:59:35 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_print_reamainder(char remainder, char alpha_case)
{
	if (remainder <= 9)
	{
		ft_putchar_fd(remainder + 48, 1);
		return ;
	}
	if (alpha_case == 'X')
	{
		ft_putchar_fd(remainder + 55, 1);
		return ;
	}
	ft_putchar_fd(remainder + 87, 1);
}

static void	_ft_putnbr_hexa(size_t nb, char specifier)
{
	if (nb >= 16)
		_ft_putnbr_hexa(nb / 16, specifier);
	ft_print_remainder(nb % 16, specifier);
}

void	ft_putnbr_hexa(size_t nb, char specifier)
{
	if (specifier == 'x' || specifier == 'X')
		_ft_putnbr_hexa((unsigned int)nb);
	else
		_ft_putnbr_hexa(nb);
}
