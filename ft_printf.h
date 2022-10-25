/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:41:37 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/25 12:34:25 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_putnbr(int n, char specifier);
int		ft_print_arg(va_list ap, char specifier);
int		ft_put_unbr(unsigned int nb);
int		ft_putnbr_hexa(size_t nb, char specifier);
int		ft_printf(const char *fmt, ...);

#endif
