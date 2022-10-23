#include "ft_printf.h"

char	ft_is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'p'
		|| c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
	   return (c);
	return (0);
}
