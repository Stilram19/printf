/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:42:05 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:36:52 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	static int	digits_count;

	digits_count++;
	if (n < 0)
	{
		ft_putchar(45);
		if (n == -2147483648)
			ft_putstr("2147483648\0");
		else
			ft_putnbr(-n);
		return (digits_count);
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + 48);
	return (digits_count);
}
