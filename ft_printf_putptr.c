/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:07:45 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/10 16:24:43 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putptr(unsigned long nbr, int *count)
{
	int		c;
	char	*hex_lower;

	hex_lower = "0123456789abcdef";
	if (nbr >= 16)
		ft_putptr(nbr / 16, count);
	c = hex_lower[nbr % 16];
	(*count)++;
	write(1, &c, 1);
}

void	ft_printf_putptr(unsigned long nbr, int *count)
{
	if (!nbr)
	{
		write(1, "(nil)", 5);
		return ;
	}
	write(1, "0x", 2);
	*count += 2;
	ft_putptr(nbr, count);
}
