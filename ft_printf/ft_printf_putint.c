/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putint.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:24:11 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/09 18:49:15 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putint(int nbr, int *count)
{
	if (nbr < (-2147483647))
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
		return ;
	}
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		write(1, "-", 1);
		(*count)++;
	}
	if (nbr >= 10)
	{
		ft_printf_putint(nbr / 10, count);
	}
	nbr = (nbr % 10) + '0';
	write(1, &nbr, 1);
	(*count)++;
}
