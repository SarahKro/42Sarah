/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putstr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:23:45 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/09 18:49:09 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_putstr(char *str, int *count)
{
	while (*str)
	{
		write(1, &(*str), 1);
		str++;
		(*count)++;
	}
}
