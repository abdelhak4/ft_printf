/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:59:37 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/28 18:59:42 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//fix it to work with long long num
void	ft_putnbr(long long n, unsigned int *lenf)
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
		ft_putnbr(n / 10, lenf);
		ft_putnbr(n % 10, lenf);
	}
}
