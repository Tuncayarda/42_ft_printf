/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils9_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:44:35 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:28:43 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_zero_plus_utils0(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;
	int	ff;
	int	fs;

	count = 0;
	ff = p_data.ff_val;
	fs = p_data.sf_val;
	is_minus = (val < 0);
	if (is_minus)
		val = -val;
	while (p_data.ff_val-- > ft_digitlen(val) + 1)
		count += ft_putchar(' ');
	if ((!val && ff - fs > ft_digitlen(val))
		&& !(ff > 0 && fs > 0))
		count += ft_putchar(' ');
	if (is_minus)
		count += ft_putchar('-');
	else
		count += ft_putchar('+');
	if (val || (ff > fs && fs != 0))
		count += ft_putdigit(val);
	return (count);
}

int	ft_putdigit_zero_plus_utils1(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;
	int	ff;
	int	fs;

	count = 0;
	ff = p_data.ff_val;
	fs = p_data.sf_val;
	is_minus = (val < 0);
	if (is_minus)
		val = -val;
	while (p_data.ff_val-- > fs + 1)
		count += ft_putchar(' ');
	if ((!val && ff - fs > ft_digitlen(val))
		&& !(ff > 0 && fs > 0))
		count += ft_putchar(' ');
	if (is_minus)
		count += ft_putchar('-');
	else
		count += ft_putchar(' ');
	while (p_data.sf_val-- > ft_digitlen(val))
		count += ft_putchar('0');
	if (val || (ff > fs && fs != 0))
		count += ft_putdigit(val);
	return (count);
}

int	ft_putdigit_zero_plus_utils2(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;
	int	ff;
	int	fs;

	count = 0;
	ff = p_data.ff_val;
	fs = p_data.sf_val;
	is_minus = (val < 0);
	if (is_minus)
		val = -val;
	if (is_minus)
		val = -val;
	while (p_data.ff_val-- > ft_digitlen(val) + 1)
		count += ft_putchar(' ');
	if (is_minus)
		count += ft_putchar('-');
	else
		count += ft_putchar('+');
	if (val)
		count += ft_putdigit(val);
	return (count);
}

int	ft_putdigit_zero_plus_utils3(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;
	int	ff;
	int	fs;

	count = 0;
	ff = p_data.ff_val;
	fs = p_data.sf_val;
	is_minus = (val < 0);
	if (is_minus)
		val = -val;
	while (p_data.ff_val-- > p_data.sf_val)
		count += ft_putchar(' ');
	if (is_minus)
		count += ft_putchar('-');
	else
		count += ft_putchar('+');
	while (p_data.sf_val-- > ft_digitlen(val) + 1)
		count += ft_putchar('0');
	count += ft_putdigit(val);
	return (count);
}

int	ft_putdigit_zero_plus_utils4(t_fdata p_data, long val)
{
	int	count;
	int	is_minus;
	int	ff;
	int	fs;

	count = 0;
	ff = p_data.ff_val;
	fs = p_data.sf_val;
	is_minus = (val < 0);
	if (is_minus)
		val = -val;
	while (p_data.ff_val-- > ft_digitlen(val))
		count += ft_putchar(' ');
	if (is_minus)
		count += ft_putchar('-');
	else
		count += ft_putchar('+');
	count += ft_putdigit(val);
	return (count);
}
