/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skroboth <skroboth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 16:50:59 by skroboth          #+#    #+#             */
/*   Updated: 2024/10/10 17:00:09 by skroboth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* #include "ft_printf_putchar.c"
#include "ft_printf_puthex.c"
#include "ft_printf_putint.c"
#include "ft_printf_putstr.c"
#include "ft_printf_putuint.c"
#include "ft_printf_putptr.c" */

static void	ft_sort(char c, va_list arg, int *count)
{
	if (c == 'c')
		ft_printf_putchar((char)va_arg(arg, int), count);
	else if (c == 's')
		ft_printf_putstr(va_arg(arg, char *), count);
	else if (c == 'p')
		ft_printf_putptr(va_arg(arg, unsigned long), count);
	else if (c == 'd' || c == 'i')
		ft_printf_putint(va_arg(arg, int), count);
	else if (c == 'u')
		ft_printf_putuint(va_arg(arg, unsigned int), count);
	else if (c == 'x')
		ft_printf_puthex(va_arg(arg, unsigned int), 'x', count);
	else if (c == 'X')
		ft_printf_puthex(va_arg(arg, unsigned int), 'X', count);
	else if (c == '%')
	{
		write(1, "%", 1);
		(*count)++;
	}
}

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		count;

	count = 0;
	if (!format)
		return (0);
	va_start(arg, format);
	while (*format)
	{
		while (*format != '%' && *format != '\0')
		{
			write(1, format, 1);
			format++;
			count++;
		}
		if (*format == '%')
		{
			format++;
			ft_sort(*format, arg, &count);
			if (*format != '\0')
				format++;
		}
	}
	va_end(arg);
	return (count);
}


#include <stdio.h>
#include <limits.h>

/* int	main(void)
{
	ft_printf("%d",2800000000);
	printf("%d",(int)2800000000);
	int				i;
	int				count;
	int             countreal;
	void			*ptr;
	char			*str;
	int				sun;
	unsigned int	km;
	unsigned int	hex1;
	unsigned int	hex2;

	i = 2;
	ptr = &i;
	str = "adress";
	sun = 149631384;
	km = 1496313840;
	hex1 = 75648392;
	hex2 = 75648392;
	count = ft_printf("Hell%c my %s is: %p!\nI'm
			%dkm from the sun. \nThat's 10%% of %ukm.\n%X %x.\n", 'o', str, ptr,
			sun, km, hex1, hex2);
	countreal = printf("Hell%c my %s is: %p!\nI'm
			%dkm from the sun. \nThat's 10%% of %ukm.\n%X %x.\n", 'o', str, ptr,
			sun, km, hex1, hex2);
	printf("\nmy counter: %d\nreal counter: %d", count, countreal);
	printf("\n%p  ", "");
	printf("%p  ", NULL);
	printf("%p  ", (void *)-14523);
	printf("0x%p-  ", (void *)ULONG_MAX);
	printf("%pp%p%p\n  ", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);
		
	ft_printf("\n%p  ", "");
	ft_printf("%p  ", NULL);
	ft_printf("%p  ", (void *)-14523);
	ft_printf("0x%p-  ", (void *)ULONG_MAX);
	ft_printf("%pp%p%p\n  ", (void *)LONG_MAX + 423856, (void *)0, (void *)INT_MAX);

	printf(" NULL %s NULL \n", NULL);
	ft_printf(" NULL %s NULL \n", NULL);
 
	return (0);
} */