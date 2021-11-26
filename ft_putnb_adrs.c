#include "ft_printf.h"


void    ft_putnb_adrs(size_t nb, unsigned int *lenf)
{
    if (nb == 0)
    {
        ft_putstr("0x", lenf);
        ft_putchar('0', lenf);
    }
    else
    {
        ft_putstr("0x", lenf);
        ft_print_hadrs(nb, lenf);
    }
}