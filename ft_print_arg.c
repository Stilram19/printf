/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:40:06 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/25 13:40:35 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(va_list ap, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (specifier == 's')
		return (ft_putstr(va_arg(ap, char *)));
	if (specifier == 'i' || specifier == 'd')
		return (ft_putnbr(va_arg(ap, int), specifier));
	if (specifier == 'u')
		return (ft_put_unbr(va_arg(ap, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_putnbr_hexa(va_arg(ap, unsigned int), specifier));
	if (specifier == 'p')
		return (ft_putnbr_hexa(va_arg(ap, size_t), specifier));
	return (ft_putchar(specifier));
}
