/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils5_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:26:15 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:56:26 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_width_dot(t_fdata p_data, long val)
{
	int	ff;
	int	fs;

	ff = p_data.ff_val;
	fs = p_data.sf_val;
	if (ff > fs)
	{
		if (fs < ft_digitlen(val))
			return (ft_putdigit_width_dot_util0(p_data, val));
		else
			return (ft_putdigit_width_dot_util1(p_data, val));
	}
	else if (!ff && !fs)
		return (ft_putdigit_width_dot_util2(p_data, val));
	else if (ff <= fs)
	{
		if (fs >= ft_digitlen(val))
			return (ft_putdigit_width_dot_util3(p_data, val));
		else
			return (ft_putdigit_width_dot_util4(p_data, val));
	}
	return (0);
}

int	ft_putdigit_minus_dot(t_fdata p_data, long val)
{
	int	count;

	count = 0;
	if (ft_digitlen(val) < p_data.sf_val && val < 0)
		p_data.ff_val -= p_data.sf_val - ft_digitlen(val) + 1;
	else if (ft_digitlen(val) < p_data.sf_val)
		p_data.ff_val -= p_data.sf_val - ft_digitlen(val);
	if (val < 0)
	{
		val = -val;
		count += ft_putchar('-');
		p_data.ff_val--;
	}
	while (p_data.sf_val > ft_digitlen(val))
	{
		count += ft_putchar('0');
		p_data.sf_val--;
	}
	if (p_data.sf_val != 0 || val > 0)
		count += ft_putdigit(val);
	else
		count += ft_putchar(' ');
	while (p_data.ff_val-- > ft_digitlen(val))
		count += ft_putchar(' ');
	return (count);
}

int	ft_puthex_width(t_fdata p_data, long val, int is_upper)
{
	int	count;

	count = 0;
	while (p_data.ff_val > ft_hexlen(val))
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	if (is_upper)
		count += ft_puthex(val, is_upper);
	else
		count += ft_puthex(val, is_upper);
	return (count);
}

int	ft_puthex_width_dot(t_fdata p_data, long val, int is_upper)
{
	int	count;

	count = 0;
	if (ft_hexlen(val) < p_data.sf_val)
		p_data.ff_val -= p_data.sf_val - ft_hexlen(val);
	while (p_data.ff_val-- > ft_hexlen(val))
		count += ft_putchar(' ');
	while (p_data.sf_val > ft_hexlen(val))
	{
		count += ft_putchar('0');
		p_data.sf_val--;
	}
	if (val > 0)
		return (count + ft_puthex(val, is_upper));
	else if (p_data.sf_val != 0 && val == 0)
		return (count + ft_putchar('0'));
	else
		return (count + ft_putchar(' '));
}

int	ft_puthex_minus_dot(t_fdata p_data, long val, int is_upper)
{
	int	count;

	count = 0;
	if (ft_hexlen(val) < p_data.sf_val)
		p_data.ff_val -= p_data.sf_val - ft_hexlen(val);
	while (p_data.sf_val > ft_hexlen(val))
	{
		count += ft_putchar('0');
		p_data.sf_val--;
	}
	if (val > 0)
		count += ft_puthex(val, is_upper);
	else if (val == 0 && p_data.sf_val != 0)
		count += ft_putchar('0');
	else if (p_data.sf_val == 0)
		count += ft_putchar(' ');
	while (p_data.ff_val-- > ft_hexlen(val))
		count += ft_putchar(' ');
	return (count);
}
