/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mous <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 19:02:41 by ael-mous          #+#    #+#             */
/*   Updated: 2021/11/28 19:04:59 by ael-mous         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, unsigned int *lenf)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i], lenf);
			i++;
		}
	}
	else
		ft_putstr("(null)", lenf);
}
