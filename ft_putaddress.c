/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:02:29 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 19:12:59 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putaddress(unsigned long addressValue, int put_head)
{
	int		count;
	char	*base;
	count = 0;
	base = "0123456789abcdef";
	if (!addressValue)
		return (ft_putstr("(nil)"));
	if (put_head)
		count += ft_putstr("0x");
	if (addressValue >= 16)
		count += ft_putaddress(addressValue / 16, 0);
	count += ft_putchar(base[addressValue % 16]);
	return (count);
}
