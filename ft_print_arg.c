#include "ft_printf.h"

void	ft_print_arg(va_list ap, char specifier)
{
	if (specifier == 'c')
		ft_putchar_fd(va_arg(ap, int), 1);
	else if (specifier == 's')
		ft_putstr_fd(va_arg(ap, char *), 1);
	else if (specifier == 'd' || specifier == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (specifier == 'u')
		ft_putnbr_fd(va_arg(ap, unsigned int), 1);
	else if (specifier == 37)
		ft_putchar_fd(37, 1);
	else if (specifier == 'x'
		|| specifier == 'X')
		ft_putnbr_hexa(va_arg(ap, unsigned int), specifier);
	else if (specifier == 'p')
		ft_putaddress(va_arg(ap, void *));
}
