/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:11:23 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/28 19:02:21 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_u(unsigned int n, unsigned int *lenf)
{
	if (n < 0)
	{
		n *= -1;
		ft_putchar('-', lenf);
	}
	if (n < 10)
	{
		n = n + '0';
		ft_putchar(n, lenf);
	}
	else if (n >= 10)
	{
		ft_putnbr_u(n / 10, lenf);
		ft_putnbr_u(n % 10, lenf);
	}
}
