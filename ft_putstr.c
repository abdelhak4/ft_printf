#include "ft_printf.h"

void ft_putstr(char *s, unsigned int *lenf)
{
	int	i;

	i = 0;
	if (s)
		while (s[i])
		{
			ft_putchar(s[i], lenf);
			i++;
		}
	else
		ft_putstr("(null)", lenf);
}
