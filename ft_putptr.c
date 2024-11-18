/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:42:12 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/17 21:49:26 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long val)
{
	int		count;
	char	*base;
	char	buffer[16];
	int		i;

	count = 0;
	base = "0123456789abcdef";
	if (!val)
		return (ft_putstr("0x0"));
	count += ft_putstr("0x");
	i = 0;
	while (val > 0)
	{
		buffer[i++] = base[val % 16];
		val /= 16;
	}
	while (i > 0)
		count += ft_putchar(buffer[--i]);
	return (count);
}
