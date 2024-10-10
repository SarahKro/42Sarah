/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putuint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:23:01 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/09 18:49:05 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putuint(unsigned int n, int *count)
{
	char	c;

	if (n >= 10)
	{
		ft_printf_putuint(n / 10, count);
	}
	c = (n % 10) + '0';
	write(1, &c, 1);
	(*count)++;
}
