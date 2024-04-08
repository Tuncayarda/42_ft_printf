/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:50:58 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 01:00:09 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print(va_list *args, t_print p_data)
{
	if (p_data.v_type == 'c')
		return (ft_printc(p_data, va_arg(*args, int)));
	if (p_data.v_type == 's')
		return (ft_prints(p_data, va_arg(*args, char *)));
	if (p_data.v_type == 'p')
		return (ft_printp(p_data, va_arg(*args, unsigned long)));
	if (p_data.v_type == 'd' || p_data.v_type == 'i')
		return (ft_printid(p_data, (long)va_arg(*args, int)));
	if (p_data.v_type == 'u')
		return (ft_printid(p_data, (long)va_arg(*args, unsigned int)));
	if (p_data.v_type == 'x')
		return (ft_printx(p_data, va_arg(*args, unsigned int), 0));
	if (p_data.v_type == 'X')
		return (ft_printx(p_data, va_arg(*args, unsigned int), 1));
	if (p_data.v_type == '%')
		return (ft_putchar('%'));
	return (1);
}

int	ft_defineflag(va_list *args, const char **sptr)
{
	t_print print_data;
	(*sptr)++;

	if (**sptr >= '1' && **sptr <= '9')
	{
		print_data.f_flg = 'w';
		print_data.f_flgs = ft_uatoi(sptr);
		print_data.s_flg = ft_isflag(**sptr);
		if (ft_isflag(**sptr))
			ft_passflag(sptr);
		print_data.s_flgs = ft_uatoi(sptr);
		print_data.v_type = ft_isvalidtype(**sptr);
	}
	else
	{
		print_data.f_flg = ft_isflag(**sptr);
		if (ft_isflag(**sptr))
			ft_passflag(sptr);
		print_data.f_flgs = ft_uatoi(sptr);
		print_data.s_flg = ft_isflag(**sptr);
		if (ft_isflag(**sptr))
			ft_passflag(sptr);
		print_data.s_flgs = ft_uatoi(sptr);
		print_data.v_type = ft_isvalidtype(**sptr);
	}

	return (ft_print(args, print_data));
}

int	ft_printf(const char *str, ...)
{
	int		count;
	va_list	args;

	va_start(args, str);
	count = 0;
	while(*str)
	{
		if (*str != '%' && *str)
			count += ft_putchar(*str);
		else if (*str == '%')
		{
			count += ft_defineflag(&args, &str);
		}
		str++;
	}
	va_end(args);
	return (count);
}
