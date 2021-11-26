/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:00:10 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/26 14:55:10 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int ft_printf(const char *format, ...)
{
	
	int	i;
	unsigned int	lenf;
	va_list ptr;

	va_start(ptr, format);
	i = 0;
	lenf = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ft_putchar('%', &lenf);
			if (format[i] == 'c')
				ft_putchar(va_arg(ptr, int), &lenf);
			 if (format[i] == 's')
				ft_putstr(va_arg(ptr, char *), &lenf);
			 if (format[i] == 'd' || format[i] == 'i')
			 	ft_putnbr(va_arg(ptr, int), &lenf);
			 if (format[i] == 'p')
			 	 ft_putnb_adrs(va_arg(ptr, size_t), &lenf);
			 if (format[i] == 'x')
			 	ft_print_hex(va_arg(ptr, size_t), &lenf);
			 if (format[i] == 'X')
			 	ft_print_x(va_arg(ptr, size_t), &lenf);
			if (format[i] == 'u')
				ft_putnbr_u(va_arg(ptr, unsigned int), &lenf);

		}
		else
			ft_putchar(format[i], &lenf);
		i++;
	}
	va_end(ptr);
	return (lenf);
}
