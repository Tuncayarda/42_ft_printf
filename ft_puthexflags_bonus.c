/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexflags_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 23:55:04 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 00:17:45 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexwidth(int width, unsigned int val, int upper)
{
	int	count;

	count = 0;
	while (width-- > ft_hexlen(val))
		count += ft_putchar(' ');
	count += ft_puthex(val, upper);
	return (count);
}

int	ft_puthexdot(int size, unsigned int val, int upper)
{
	int	count;

	count = 0;
	if (size == 0 && val == 0)
		return (0);
	if (size < ft_hexlen(val))
		return (ft_puthex(val, upper) + count);
	while (size-- > ft_hexlen(val))
		count += ft_putchar('0');
	count += ft_puthex(val, upper);
	return (count);
}

int	ft_puthexminus(int size, unsigned int val, int upper)
{
	int	count;

	if (size <= ft_hexlen(val))
		return (ft_puthex(val, upper));
	count = ft_puthex(val, upper);
	while (size-- > ft_hexlen(val))
		count += ft_putchar(' ');
	return (count);
}

int	ft_puthexminusdot(int m_val, int d_val, unsigned int val, int upper)
{
	int	count;
	int	written;

	count = 0;
	count += ft_puthexdot(d_val, val, upper);
	written = count;
	while (m_val-- > written)
		count += ft_putchar(' ');
	return (count);
}

int	ft_puthexzero(int width, unsigned int val, int upper)
{
	int	count;

	count = 0;	
	if (width == 0 && val == 0)
		return (0);
	while (width-- > ft_hexlen(val))
		count += ft_putchar('0');
	count += ft_puthex(val, upper);
	return (count);
}
