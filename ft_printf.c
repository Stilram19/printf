/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:36:28 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/25 13:16:06 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		ret;
	va_list	ap;

	ret = 0;
	va_start(ap, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%')
		{
			if (*(fmt + 1) == '\0')
				break ;
			ret += ft_print_arg(ap, *(fmt + 1));
			fmt += 2;
			continue ;
		}
		ret += ft_putchar(*fmt);
		fmt++;
	}
	return (ret);
}
