/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:15:25 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 20:23:48 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_managenbr(const char **sptr, char flag, int n)
{
	(void)flag; 
	while (*(*sptr - 1) != '%')
		(*sptr)--;
	if (**sptr == '-')
		return (ft_managenbrminflag(sptr, n));
	else if (**sptr == '0')
		return (ft_managenbrzeroflag(sptr, n));
	else if (**sptr == '.')
		return (ft_managenbrdotflag(sptr, n));
	else
		return (ft_putnbr(n, 1));
}

int	ft_putnbr(int n, int wr)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putstr("-2147483648", wr);
	}
	else if (n < 0)
	{
		n = -n;
		i += ft_putchar('-', wr);
		i += ft_putnbr(n, wr);
	}
	else if (n > 9)
	{
		i += ft_putnbr(n / 10, wr);
		i += ft_putnbr(n % 10, wr);
	}
	else if (n <= 9)
	{
		i += ft_putchar(n + 48, wr);
	}
	return (i);
}
