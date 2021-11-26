#include "ft_printf.h"

void    ft_print_hadrs(size_t nu, unsigned int *lenf)
{
    int i;
    char glas[16];
    char *hex;

    i = 0;
    hex = "0123456789abcdef";
    if (nu < 16)
        ft_putchar(hex[nu], lenf);
    else
    {
        if (nu == 0)
        {
            ft_putchar('0', lenf);
        }while (nu > 0)
        {
            glas[i] = hex[nu % 16];
            nu /= 16;
            i++;
        }
    }
    glas[i] = 0;
    i = ft_strlen(glas) - 1;
    while (glas[i])
    {
        ft_putchar(glas[i], lenf);
        i--;
    }
}