/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 18:15:25 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 01:24:24 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_managenbr(const char **sptr, int n)
{
	int	fopval;
	int	sopval;

	while (*(*sptr - 1) != '%')
		(*sptr)--;
	if (**sptr == '-' || **sptr == '0')
		(*sptr)++;
	fopval = ft_uatoi(sptr, 0);
	sopval = ft_uatoi(sptr, 1);
	while (*(*sptr - 1) != '%')
		(*sptr)--;
	if ((**sptr == '-' && fopval == 0 && ft_strrchr(*sptr, '.')) || (**sptr == '-' && ft_strrchr(*sptr, '.')))
		return (ft_manageminanddotflag(sptr, n, fopval, sopval));
	if ((**sptr == '0' && ft_strrchr(*sptr, '.')) || (**sptr == '0' && ft_strrchr(*sptr, '.')))
		return (ft_managezeroanddotflag(sptr, n, fopval, sopval));
	else if (**sptr == '-')
		return (ft_managenbrminflag(sptr, n));
	else if (**sptr == '0')
		return (ft_managenbrzeroflag(sptr, n));
	else if (**sptr == '.')
		return (ft_managenbrdotflag(sptr, n));
	else
		return (ft_managenoflag(sptr, n));
}

int	ft_putnbr(int n, int wr)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i += ft_putstr("2147483648", wr);
	}
	else if (n < 0)
	{
		n = -n;
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
