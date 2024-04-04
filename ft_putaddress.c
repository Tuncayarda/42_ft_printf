/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:04:00 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 20:23:32 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_manageaddress(unsigned long n, char flag, const char **sptr)
{
	(void)flag; 
	ft_putstr("0x", 1);
	while (*(*sptr - 1) != '%')
		(*sptr)--;
	if (**sptr == '-')
		return (ft_manageadrminflag(sptr, n));
	else
		return (ft_putaddress(n, 1) + 2);
}

int	ft_putaddress(unsigned long addressValue, int wr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (!addressValue)
	{
		i += ft_putstr("(nil)", wr);
		return (i);
	}
	if (addressValue >= 16)
		i += ft_putaddress(addressValue / 16, wr);
	i += ft_putchar(base[addressValue % 16], wr);
	return (i);
}
