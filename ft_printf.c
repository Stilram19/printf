/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:36:28 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/24 18:14:52 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		ret;
	va_list	ap;

	ret = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == 37)
		{
			if (*(fmt + 1))
				ret += ft_print_arg(ap, *(fmt + 1));
			else
				break ;
			fmt += 2;
			continue ;
		}
		ret += ft_putchar(*fmt);
		fmt++;
	}
	return (ret);
}
