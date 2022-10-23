/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 10:36:28 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 14:59:30 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	char	specifier_temp;
	int		ret;

	ret = 0;
	va_start(ap, fmt);
	while (*(fmt + ret))
	{
		if (*(fmt + ret) == 37 && (*(fmt + ret + 1)))
		{
			specifier_temp = ft_is_specifier(*(fmt + ret + 1));
			if (specifier_temp)
				ft_print_arg(ap, specifier_temp);
			else if (*(fmt + ret + 1) == 37)
				ft_putchar_fd(37, 1);
			ret += 2;
			continue ;
		}
		ft_putchar_fd(*(fmt + ret), 1);
		ret++;
	}
	return (ret);
}
