#include "ft_printf.h"

void	ft_putchar(char c, unsigned int *lenf)
{
	write(1, &c, 1);
	(*lenf)++;
}
