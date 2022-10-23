/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obednaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:33:47 by obednaou          #+#    #+#             */
/*   Updated: 2022/10/23 13:21:57 by obednaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr_64_hexa(size_t nbr)
{
	if (nbr <= 
}

void	ft_putaddress(void *address)
{
	ft_putnbr_64_hexa((size_t)address);	
}
