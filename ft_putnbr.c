/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <schoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:23:37 by schoukou          #+#    #+#             */
/*   Updated: 2021/12/03 17:31:20 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	unsigned int	n;
	int				x;

	x = 0;
	if (nb < 0)
	{	
		ft_putchar('-');
		n = nb * -1;
		x++;
	}
	else
		n = nb;
	if (n > 9)
	{
		x += ft_putnbr(n / 10);
		x += ft_putnbr(n % 10);
	}
	else if (n < 10)
		x += ft_putchar(n + 48);
	return (x);
}

int	ft_putnbr2(unsigned int n)
{
	int	x;

	x = 0;
	if (n >= 0 && n <= 9)
	{
		x += ft_putchar(n + 48);
	}
	else
	{
		x += ft_putnbr(n / 10);
		x += ft_putnbr(n % 10);
	}
	return (x);
}
