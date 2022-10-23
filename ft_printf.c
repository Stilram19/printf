/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:36:28 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:34:50 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	int		i;
	int		ret;
	va_list	ap;
	char	specifier_temp;

	i = 0;
	ret = 0;
	va_start(ap, fmt);
	while (*(fmt + i))
	{
		if (*(fmt + i) == 37 && (*(fmt + i + 1)))
		{
			specifier_temp = ft_is_specifier(*(fmt + i + 1));
			if (specifier_temp)
				ret += ft_print_arg(ap, specifier_temp);
			else if (*(fmt + i + 1) == 37)
				ret += ft_putchar(37);
			i += 2;
			continue ;
		}
		ft_putchar(*(fmt + i));
		ret++;
		i++;
	}
	return (ret);
}
