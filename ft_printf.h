/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoukou <schoukou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:19:39 by schoukou          #+#    #+#             */
/*   Updated: 2021/12/03 17:17:30 by schoukou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     FT_PRINTF_H
# define     FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdarg.h>

int	ft_putnbr(int nb);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_printf(const char *type, ...);
int	ft_putnbr2(unsigned int n);
int	ft_hexalow(unsigned int nb);
int	ft_hexaup(unsigned int nb);
int	ft_adress(unsigned long long nb);
int	ft_hexa_p(unsigned long long nb);
#endif
