/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadrflags_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:15:04 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 19:39:57 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putadrwidth(int width, unsigned long val)
{
	int	count;

	count = 0;
	if (!val)
		while (width-- > 5)
			count += ft_putchar(' ');
	else
		while (width-- > 14)
			count += ft_putchar(' ');
	count += ft_putaddress(val, 1);
	return (count);
}

int	ft_putadrminus(int size, unsigned long val)
{
	int	count;
	int adr_length;

	count = 0;
	count += ft_putaddress(val, 1);
	adr_length = count;
	if (!val)
		while (size-- > 5)
			count += ft_putchar(' ');
	else
		while (size-- > adr_length)
			count += ft_putchar(' ');
	return (count);
}
