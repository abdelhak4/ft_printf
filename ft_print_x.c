/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:25:29 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/28 18:26:57 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_x(unsigned int nu, unsigned int *lenf)
{
	int		i;
	char	glas[16];
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (nu < 16)
		ft_putchar(hex[nu], lenf);
	else
	{
		if (nu == 0)
		{
			ft_putchar('0', lenf);
		}
		while (nu > 0)
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
