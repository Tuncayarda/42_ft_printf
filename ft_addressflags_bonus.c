/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_addressflags_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 18:33:04 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 19:56:50 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_manageadrminflag(const char **sptr, unsigned long n)
{
	int	opval;
	int	numval;
	int	i;

	i = 0;
	opval = ft_uatoi(sptr);
	numval = ft_putaddress(n, 1);
	if (opval > numval)
		while (opval - 2 > numval + i++)
			ft_putchar(' ', 1);
	if (opval < numval)
		return (numval + 2);
	else
		return (opval);
}
