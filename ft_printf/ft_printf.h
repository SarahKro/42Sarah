/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 18:31:47 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/10 16:23:35 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	ft_printf_putchar(char c, int *count);
void	ft_printf_putstr(char *str, int *count);
void	ft_printf_putint(int nbr, int *count);
void	ft_printf_putuint(unsigned int n, int *count);
void	ft_printf_puthex(unsigned long nbr, char sign, int *count);
void	ft_printf_putptr(unsigned long nbr, int *count);

#endif