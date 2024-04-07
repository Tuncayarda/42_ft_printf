/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrflags_bonus2.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:06:08 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 00:52:14 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_manageminanddotflag(const char **sptr, int n, int mopv, int dopv)
{
	int	buff;
	int	i;

	buff = 0;
	i = 0;
	if (n < 0)
	{
		n = -n;
		buff += ft_putchar('-', 1);
	}
	while (dopv > ft_putnbr(n, 0) + i++)
		buff += ft_putchar('0', 1);
	if (n != 0 || dopv > 0)
		buff += ft_putnbr(n, 1);
	while (mopv > buff)
		buff += ft_putchar(' ', 1);
	while ((**sptr <= '9' && **sptr >= '0') || **sptr == '-' || **sptr == '.')
		(*sptr)++;
	return (buff);
}

int	ft_managezeroanddotflag(const char **sptr, int n, int zopv, int dopv)
{
	int	buff;
	int isminus;
	int	numsize;

	if (ft_putnbr(n, 0) > dopv)
		numsize = ft_putnbr(n, 0);
	else 
		numsize = dopv;
	buff = 0;
	isminus = 0;
	if (n < 0)
		isminus = 1;
	while (zopv-- > numsize + isminus && (n > 9 || n < -9 || n == 0))
		buff += ft_putchar(' ', 1);
	if (isminus)
	{
		n = -n;
		buff += ft_putchar('-', 1);
	}
	while (numsize-- > ft_putnbr(n, 0))
		buff += ft_putchar('0', 1);
	if (dopv == 0 && n == 0) 
		buff += ft_putchar(' ', 1);
	if (n != 0 || dopv > 0)
		buff += ft_putnbr(n, 1);
	while ((**sptr <= '9' && **sptr >= '0') || **sptr == '.')
		(*sptr)++;
	return (buff);
}
