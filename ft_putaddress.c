/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:04:00 by tuaydin           #+#    #+#             */
/*   Updated: 2024/03/30 22:57:21 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(unsigned long addressValue, int flag)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (!addressValue)
	{
		i += ft_putstr("(nil)");
		return (i);
	}
	if (flag == 1)
		i += ft_putstr("0x");
	if (addressValue >= 16)
		i += ft_putaddress(addressValue / 16, 0);
	i += ft_putchar(base[addressValue % 16]);
	return (i);
}
