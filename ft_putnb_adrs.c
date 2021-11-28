/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnb_adrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:56:06 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/28 18:59:22 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnb_adrs(size_t nb, unsigned int *lenf)
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
