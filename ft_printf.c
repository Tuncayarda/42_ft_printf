/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:42:21 by tuaydin           #+#    #+#             */
/*   Updated: 2024/03/30 23:07:19 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handlepercent(va_list *args, char c, int *count)
{
	if (c == 'c')
		*count += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		*count += ft_putstr(va_arg(*args, char *));
	else if (c == 'p')
		*count += ft_putaddress(va_arg(*args, unsigned long), 1);
	else if (c == 'd' || c == 'i')
		*count += ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		*count += ft_putuint(va_arg(*args, unsigned int));
	else if (c == 'x')
		*count += ft_puthex(va_arg(*args, unsigned int), 0);
	else if (c == 'X')
		*count += ft_puthex(va_arg(*args, unsigned int), 1);
	else if (c == '%')
		*count += ft_putchar('%');
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	while (*str)
	{
		if (*str != '%' && *str)
			count += ft_putchar(*str);
		else if (*str == '%')
		{
			str++;
			while (*str == ' ')
				str++;
			ft_handlepercent(&args, *str, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}
