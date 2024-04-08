/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrflags_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:01:20 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 22:29:20 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrwidth(int width, long val)
{
	int	count;

	count = 0;
	while (width-- > ft_nbrlen(val))
		count += ft_putchar(' ');
	count += ft_putnbr(val);
	return (count);
}

int	ft_putnbrdot(int size, long val)
{
	int	count;

	count = 0;
	if (size == 0 && val == 0)
		return (0);
	if (val < 0)
	{
		val = -val;
		count += ft_putchar('-');
	}
	if (size < ft_nbrlen(val))
		return (ft_putnbr(val) + count);
	while (size-- > ft_nbrlen(val))
		count += ft_putchar('0');
	count += ft_putnbr(val);
	return (count);
}

int	ft_putnbrminus(int size, long val)
{
	int	count;

	if (size <= ft_nbrlen(val))
		return (ft_putnbr(val));
	count = ft_putnbr(val);
	while (size-- > ft_nbrlen(val))
		count += ft_putchar(' ');
	return (count);
}

int	ft_putnbrminusdot(int m_val, int d_val, long val)
{
	int	count;
	int	written;

	count = 0;
	count += ft_putnbrdot(d_val, val);
	written = count;
	while (m_val-- > written)
		count += ft_putchar(' ');
	return (count);
}

int	ft_putnbrzero(int width, long val)
{
	int	count;
	int	ismin;

	count = 0;
	ismin = 0;	
	if (width == 0 && val == 0)
		return (0);
	if (val < 0)
	{
		val = -val;
		count += ft_putchar('-');
		ismin++;
	}
	while (width-- > ft_nbrlen(val) + ismin)
		count += ft_putchar('0');
	count += ft_putnbr(val);
	return (count);
}
