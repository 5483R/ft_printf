/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <schoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 22:22:45 by schoukou          #+#    #+#             */
/*   Updated: 2021/12/03 00:06:09 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexalow(unsigned int nb)
{
	char	*hexa;
	int		x;

	hexa = "0123456789abcdef";
	x = 0;
	if (nb >= 16)
	{
		x += ft_hexalow (nb / 16);
		x += ft_hexalow (nb % 16);
	}
	else
		x += write (1, &hexa[nb], 1);
	return (x);
}

int	ft_hexaup(unsigned int nb)
{
	char	*hexa;
	int		x;

	x = 0;
	hexa = "0123456789ABCDEF";
	if (nb >= 16)
	{
		x += ft_hexaup (nb / 16);
		x += ft_hexaup (nb % 16);
	}
	else
		x += write (1, &hexa[nb], 1);
	return (x);
}
