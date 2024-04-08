/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrflags2_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 22:32:39 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 23:38:24 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrzerodot(int z_size, int d_size, long val)
{
	int	count;
	int	numlen;
	int	ismin;
	
	count = 0;
	ismin = 0;
	if (val < 0)
		ismin = 1;
	if (d_size > ft_nbrlen(val))
		numlen = d_size + ismin;
	else
		numlen = ft_nbrlen(val);
	if (val == 0 && d_size == 0)
		while (z_size-- >= numlen)
			count += ft_putchar(' ');
	if (z_size > numlen)
		while (z_size-- > numlen)
			count += ft_putchar(' ');
	count += ft_putnbrdot(d_size, val);
	return (count);
}

int	ft_putnbrspace(long val)
{
	if (val >= 0)
		return (ft_putchar(' ') + ft_putnbr(val));
	return (ft_putnbr(val));
}

int ft_putnbrplus(long val)
{
	if (val >= 0)
		return (ft_putchar('+') + ft_putnbr(val));
	return (ft_putnbr(val));
}
