/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 22:35:38 by tuaydin           #+#    #+#             */
/*   Updated: 2024/03/30 22:56:26 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int val, int upper)
{
	int		i;
	char	*base;

	i = 0;
	if (upper == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (val >= 16)
		i += ft_puthex(val / 16, upper);
	i += ft_putchar(base[val % 16]);
	return (i);
}
