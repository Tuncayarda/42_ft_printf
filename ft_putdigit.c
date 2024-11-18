/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:43:07 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:47:55 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdigit(long n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count += ft_putchar('-');
		count += ft_putdigit(n);
	}
	else if (n > 9)
	{
		count += ft_putdigit(n / 10);
		count += ft_putdigit(n % 10);
	}
	else if (n <= 9)
		count += ft_putchar(n + 48);
	return (count);
}
