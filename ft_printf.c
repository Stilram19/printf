#include "ft_printf.h"

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	char	temp;
	int		ret;

	ret = 0;
	va_start(ap, fmt);
	while (*(fmt + ret))
	{
		if (*(fmt + ret) == 37 && (*(fmt + ret + 1)))
		{
			specifier_temp = ft_is_specifier(*(fmt + ret + 1));
			if (specifier_temp)
				ft_print_arg(ap, temp);
			else if (*(fmt + ret + 1) == 37)
				ft_putchar_fd(*(fmt + ret + 1), 1);
			ret += 2;
			continue;
		}
		ft_putchar_fd(*(fmt + ret + 1), 1);
		ret++;
	}
	return (ret);
}
