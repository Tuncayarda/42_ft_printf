/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrflags_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:18:23 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 19:15:33 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_managenbrminflag(const char **sptr, int n)
{
	int	opval;
	int	numval;
	int	i;

	i = 0;
	opval = ft_uatoi(sptr);
	numval = ft_putnbr(n, 1);
	while (i++ < opval - numval)
		ft_putchar(' ', 1);
	if (opval < numval)
		return (numval);
	else
		return (opval);
}

int	ft_managenbrzeroflag(const char **sptr, int n)
{
	int	opval;
	int	numval;
	int	i;

	i = 0;
	opval = ft_uatoi(sptr);
	numval = ft_putnbr(n, 0);
	while (i++ < opval - numval)
		ft_putchar('0', 1);
	numval = ft_putnbr(n, 1);
	if (opval < numval)
		return (numval);
	else
		return (opval);
}

int	ft_managenbrdotflag(const char **sptr, int n)
{
	int	opval;
	int	numval;
	int	i;

	i = 0;
	opval = ft_uatoi(sptr);
	numval = ft_putnbr(n, 0);
	while (i++ < opval - numval)
		ft_putchar('0', 1);
	numval = ft_putnbr(n, 1);
	if (opval < numval)
		return (numval);
	else
		return (opval);
}
