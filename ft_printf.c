/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <schoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:06:18 by schoukou          #+#    #+#             */
/*   Updated: 2021/12/06 22:37:02 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfuc(char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_putnbr2(va_arg(args, unsigned int)));
	else if (type == 'x')
		return (ft_hexalow(va_arg(args, unsigned int)));
	else if (type == 'X')
		return (ft_hexaup(va_arg(args, unsigned int)));
	else if (type == 'p')
		return (ft_adress(va_arg(args, unsigned long)));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *type, ...)
{
	int		i;
	int		x;
	va_list	args;

	x = 0;
	i = 0;
	va_start(args, type);
	while (type[i])
	{
		if (type[i] == '%')
		{
			i++;
			x += ft_printfuc(type[i], args);
		}
		else
			x += ft_putchar(type[i]);
		i++;
	}
	va_end(args);
	return (x);
}
