/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils3_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:22:43 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 20:58:49 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_plus(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;

	count = 0;
	is_minus = (val < 0);
	while (p_data.ff_val-- > ft_digitlen(val) + 1 - is_minus)
		count += ft_putchar(' ');
	if (val >= 0)
		count += ft_putchar('+');
	count += ft_putdigit(val);
	return (count);
}

int	ft_putchar_width(t_fdata p_data, char c)
{
	int	count;

	count = 0;
	while (p_data.ff_val > 1)
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	count += ft_putchar(c);
	return (count);
}

int	ft_putpercent_width(t_fdata p_data)
{
	int	count;

	count = 0;
	while (p_data.ff_val > 1)
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	count += ft_putchar('%');
	return (count);
}

int	ft_putpercent_minus(t_fdata p_data)
{
	int	count;

	count = 0;
	count += ft_putchar('%');
	while (p_data.ff_val > 1)
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	return (count);
}

int	ft_putstr_width(t_fdata p_data, char *str)
{
	int	count;

	count = 0;
	while (p_data.ff_val > ft_strlen(str))
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	count += ft_putstr(str);
	return (count);
}