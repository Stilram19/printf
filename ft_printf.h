/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:41:37 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 18:35:24 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_putstr(char *s);
int		ft_putnbr(int n);
int		ft_putchar(char c);
int		ft_print_arg(va_list ap, char specifier);
int		ft_putnbr_32_hexa(unsigned int nb, char specifier);
int		ft_putnbr_64_hexa(size_t nb, char specifier);
int		ft_printf(const char *fmt, ...);
char	ft_is_specifier(char c);
size_t	ft_strlen(const char *str);

#endif
