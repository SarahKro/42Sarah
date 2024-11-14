/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_puthex.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:21:40 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/09 18:49:20 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_puthex(unsigned long nbr, char sign, int *count)
{
	int		c;
	char	*hex_upper;
	char	*hex_lower;

	hex_upper = "0123456789ABCDEF";
	hex_lower = "0123456789abcdef";
	if (nbr >= 16)
		ft_printf_puthex(nbr / 16, sign, count);
	if (sign == 'X')
	{
		c = hex_upper[nbr % 16];
		(*count)++;
		write(1, &c, 1);
	}
	if (sign == 'x')
	{
		c = hex_lower[nbr % 16];
		(*count)++;
		write(1, &c, 1);
	}
}
