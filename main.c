#include "ft_printf.h"
#include <stdio.h>

int main()
{
    char l;
    int i = ft_printf("%s\n", NULL);
    //int j = printf("%s\n", NULL);
    ft_printf("%d", i);
}
