/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrflags_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:18:23 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/07 23:04:18 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_managenoflag(const char **sptr, int n)
{
	int	size;
	int	buff;

	size = 0;
	buff = 0;
	if (n < 0)
	{
		n = -n;
		if (**sptr <= '9' && **sptr >= '0')
			size = ft_uatoi(sptr, 1) - ft_putnbr(n, 0);
		while (size-- > 1)
			buff += ft_putchar(' ', 1);
		buff += ft_putchar('-', 1);
	}
	else
	{
		if (**sptr <= '9' && **sptr >= '0')
			size = ft_uatoi(sptr, 1) - ft_putnbr(n, 0);
		while (size-- > 0)
			buff += ft_putchar(' ', 1);
	}
	return (buff + ft_putnbr(n, 1));
}

int	ft_managenbrminflag(const char **sptr, int n)
{
	int	opval;
	int	numval;
	int	buff;
	int	i;

	i = 0;
	buff = 0;
	opval = ft_uatoi(sptr, 1);
	if (n < 0)
	{
		n = -n;
		buff += ft_putchar('-', 1);
		opval--;
	}
	numval = ft_putnbr(n, 1);
	while (i++ < opval - numval)
		ft_putchar(' ', 1);
	if (!n && !opval)
		return (numval);
	if (opval < numval)
		return (buff + numval);
	else
		return (buff + opval);
}

int	ft_managenbrzeroflag(const char **sptr, int n)
{
	int	opval;
	int	numval;
	int	i;
	int	j;

	j = 0;
	i = 0;
	opval = ft_uatoi(sptr, 1);
	numval = ft_putnbr(n, 0);
	if (n < 0)
	{
		n = -n;
		j += ft_putchar('-', 1);
	}
	while (i++ < opval - numval - j)
		ft_putchar('0', 1);
	numval = ft_putnbr(n, 1);
	if (opval < numval + j)
		return (numval + j);
	else
		return (opval);
}

int	ft_managenbrdotflag(const char **sptr, int n)
{
	int	opval;
	int	numval;
	int	buff;

	buff = 0;
	opval = ft_uatoi(sptr, 1);
	numval = ft_putnbr(n, 0);
	if (n < 0)
	{
		n = -n;
		buff += ft_putchar('-', 1);
	}
	else if (!n)
		numval = 0;
	while (0 < opval - numval++)
		ft_putchar('0', 1);
	if (!n)
		return (opval);
	numval = ft_putnbr(n, 1);
	if (opval < numval)
		return (buff + numval);
	else
		return (buff + opval);
}
