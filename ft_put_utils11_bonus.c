/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils11_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 21:00:53 by tuaydin           #+#    #+#             */
/*   Updated: 2024/11/18 14:32:44 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit_width_dot_util0(t_fdata p_data, long val)
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
	while (p_data.ff_val-- > ft_digitlen_pf(val) + is_minus)
		count += ft_putchar_pf(' ');
	if (is_minus)
		count += ft_putchar_pf('-');
	if (val == 0 && fs != ft_digitlen_pf(val))
		count += ft_putchar_pf(' ');
	if (val || (ff > fs && fs != 0))
		count += ft_putdigit_pf(val);
	return (count);
}

int	ft_putdigit_width_dot_util1(t_fdata p_data, long val)
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
	while (p_data.ff_val-- > fs + is_minus)
		count += ft_putchar_pf(' ');
	if ((!val && ff - fs > ft_digitlen_pf(val))
		&& !(ff > 0 && fs > 0))
		count += ft_putchar_pf(' ');
	if (is_minus)
		count += ft_putchar_pf('-');
	while (p_data.sf_val-- > ft_digitlen_pf(val))
		count += ft_putchar_pf('0');
	if (val || (ff > fs && fs != 0))
		count += ft_putdigit_pf(val);
	return (count);
}

int	ft_putdigit_width_dot_util2(t_fdata p_data, long val)
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
	while (p_data.ff_val-- > ft_digitlen_pf(val) + 1)
		count += ft_putchar_pf(' ');
	if (is_minus)
		count += ft_putchar_pf('-');
	if (val)
		count += ft_putdigit_pf(val);
	return (count);
}

int	ft_putdigit_width_dot_util3(t_fdata p_data, long val)
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
		count += ft_putchar_pf(' ');
	if (is_minus)
		count += ft_putchar_pf('-');
	while (p_data.sf_val-- > ft_digitlen_pf(val))
		count += ft_putchar_pf('0');
	count += ft_putdigit_pf(val);
	return (count);
}

int	ft_putdigit_width_dot_util4(t_fdata p_data, long val)
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
	while (p_data.ff_val-- > ft_digitlen_pf(val))
		count += ft_putchar_pf(' ');
	if (is_minus)
		count += ft_putchar_pf('-');
	count += ft_putdigit_pf(val);
	return (count);
}
