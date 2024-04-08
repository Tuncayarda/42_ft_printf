/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexflags2_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 00:18:31 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 00:35:31 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexzerodot(int z_size, int d_size, unsigned int val, int upper)
{
	int	count;
	int	numlen;
	
	count = 0;
	if (d_size > ft_hexlen(val))
		numlen = d_size;
	else
		numlen = ft_hexlen(val);
	if (val == 0 && d_size == 0)
		while (z_size-- >= numlen)
			count += ft_putchar(' ');
	if (z_size > numlen)
		while (z_size-- > numlen)
			count += ft_putchar(' ');
	count += ft_puthexdot(d_size, val, upper);
	return (count);
}

int	ft_puthexhash(unsigned int val, int upper)
{
	if (val == 0)
		return (ft_puthex(val, upper));
	if (upper)
		return (ft_putstr("0X") + ft_puthex(val, upper));
	return (ft_putstr("0x") + ft_puthex(val, upper));
}

int	ft_puthexwidthdot(int z_size, int d_size, unsigned int val, int upper)
{
	int	count;
	int	numlen;
	
	count = 0;
	if (d_size > ft_hexlen(val))
		numlen = d_size;
	else
		numlen = ft_hexlen(val);
	if (val == 0 && d_size == 0)
		while (z_size-- >= numlen)
			count += ft_putchar(' ');
	if (z_size > numlen)
		while (z_size-- > numlen)
			count += ft_putchar(' ');
	count += ft_puthexdot(d_size, val, upper);
	return (count);
}
