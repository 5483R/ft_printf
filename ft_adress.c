/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <schoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:41:31 by schoukou          #+#    #+#             */
/*   Updated: 2021/12/03 00:05:23 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_adress(unsigned long long nb)
{
	ft_putstr("0x");
	return (ft_hexa_p(nb) + 2);
}

int	ft_hexa_p(unsigned long long nb)
{
	char	*hexa;
	int		x;

	hexa = "0123456789abcdef";
	x = 0;
	if (nb >= 16)
	{
		x += ft_hexa_p (nb / 16);
		x += ft_hexa_p (nb % 16);
	}
	else
		x += write (1, &hexa[nb], 1);
	return (x);
}
