/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:04:00 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 22:28:40 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_manageaddress(unsigned long n, const char **sptr)
{
	int	noopval;
	int	buff;

	buff = 0;
	while (*(*sptr - 1) != '%')
		(*sptr)--;
	if (**sptr <= '9' && **sptr >= '0')
		noopval = ft_uatoi(sptr);
	if (!n)
	{
		while (noopval-- > 5)
			buff += ft_putchar(' ', 1);
		return (buff + ft_putstr("(nil)", 1));
	}
	while (noopval-- > 14)
		buff += ft_putchar(' ', 1);
	ft_putstr("0x", 1);
	if (**sptr == '-')
		return (ft_manageadrminflag(sptr, n) + buff);
	else
		return (ft_putaddress(n, 1) + 2 + buff);
}

int	ft_putaddress(unsigned long addressValue, int wr)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789abcdef";
	if (!addressValue)
		return (ft_putstr("(nil)", 1));
	if (addressValue >= 16)
		i += ft_putaddress(addressValue / 16, wr);
	i += ft_putchar(base[addressValue % 16], wr);
	return (i);
}
