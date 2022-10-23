/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:40:06 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:30:49 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(va_list ap, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (specifier == 'd' || specifier == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (specifier == 'u')
		return (ft_putnbr(va_arg(ap, int)));
	else if (specifier == 37)
		return (ft_putchar(37));
	else if (specifier == 'x' || specifier == 'X')
		return (ft_putnbr_32_hexa(va_arg(ap, unsigned int), specifier));
	else
		return (ft_putnbr_64_hexa(va_arg(ap, size_t), specifier));
}
