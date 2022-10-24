/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:40:06 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/24 17:59:50 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_arg(va_list ap, char specifier)
{
	if (specifier == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (specifier == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (specifier == 'i' || specifier == 'd')
		return (ft_putnbr(va_arg(ap, int), specifier));
	else if (specifier == 'u')
		return (ft_put_unbr(va_arg(ap, unsigned int)));
	else if (specifier == 37)
		return (ft_putchar(37));
	else if (specifier == 'x' || specifier == 'X'
		|| specifier == 'p')
		return (ft_putnbr_hexa(va_arg(ap, size_t), specifier));
	else
		return (ft_putchar(specifier));
}
