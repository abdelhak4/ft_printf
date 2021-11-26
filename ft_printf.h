#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

size_t	ft_strlen(char *s);
void	ft_putnbr(long long n, unsigned int *lens);
int     ft_printf(const char *format, ...);
void	ft_putnbr_u(unsigned int n, unsigned int *lens);
void    ft_print_hex(unsigned int nu, unsigned int *lens);
void    ft_print_x(unsigned int c, unsigned int *lens);
void	ft_putchar(char c, unsigned int *lenf);
void    ft_putstr(char *s, unsigned int *lens);
void    ft_putnb_adrs(size_t nb,unsigned int *lens);
void    ft_print_hadrs(size_t nu, unsigned int *lens);

#endif
