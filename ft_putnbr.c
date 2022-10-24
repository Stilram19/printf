/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:42:05 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/24 16:35:38 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digits_count_b_10(int nb)
{
	int	count;

	count = 0;
	if (!nb)
		return (1);
	if (nb < 0)
		count++;
	if (nb == -2147483648)
		return (11);
	while (nb)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

static void	_ft_putnbr(int n, char specifier)
{
	if (specifier != 'u' && n < 0)
	{
		ft_putchar(45);
		if (n == -2147483648)
			ft_putstr("2147483648\0");
		else
			_ft_putnbr(-n, specifier);
		return ;
	}
	if (n >= 10)
		_ft_putnbr(n / 10, specifier);
	ft_putchar(n % 10 + 48);
}

int	ft_putnbr(int nb, char specifier)
{
	_ft_putnbr(nb, specifier);
	return (digits_count_b_10(nb));
}
