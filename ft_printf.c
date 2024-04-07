/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:42:21 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/07 20:14:47 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_handlepercent(va_list *args, const char **str, int *count)
{
	if (**str == 'c')
		*count += ft_putchar(va_arg(*args, int), 1);
	else if (**str == 's')
		*count += ft_putstr(va_arg(*args, char *), 1);
	else if (**str == 'p')
		*count += ft_manageaddress(va_arg(*args, unsigned long), str);
	else if (**str == 'd' || **str == 'i')
		*count += ft_managenbr(str, va_arg(*args, int));
	else if (**str == 'u')
		*count += ft_putuint(va_arg(*args, unsigned int), 1);
	else if (**str == 'x')
		*count += ft_puthex(va_arg(*args, unsigned int), 0, 1);
	else if (**str == 'X')
		*count += ft_puthex(va_arg(*args, unsigned int), 1, 1);
	else if (**str == '%')
		*count += ft_putchar('%', 1);
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
			count += ft_putchar(*str, 1);
		else if (*str == '%')
		{
			str++;
			while (*str == ' ' || (*str <= '9' && *str >= '0')
				|| *str == '-' || *str == '.')
				str++;
			ft_handlepercent(&args, &str, &count);
		}
		str++;
	}
	va_end(args);
	return (count);
}
