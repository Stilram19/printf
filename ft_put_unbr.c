/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:42:16 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/24 15:46:56 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	digits_count_b_10(unsigned int nb)
{
	int	count;

	count = 0;
	if (!nb)
		return (1);
	while (nb)
	{
		count++;
		nb /= 10;
	}
	return (count);
}

static void	_ft_put_unbr(unsigned int nb)
{
	if (nb >= 10)
		_ft_put_unbr(nb / 10);
	ft_putchar(nb % 10 + 48);
}

int	ft_put_unbr(unsigned int nb)
{
	_ft_put_unbr(nb);
	return (digits_count_b_10(nb));
}
