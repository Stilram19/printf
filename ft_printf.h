#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unsitd.h>

int		ft_toupper(int c);
char	ft_is_specifier(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_print_arg(va_list ap, char specifier);
void	ft_putnbr_hexa(unsigned int nb, char alpha_case);
void	ft_putaddress(void *address);

#endif
