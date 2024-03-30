/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 04:28:51 by tuaydin           #+#    #+#             */
/*   Updated: 2024/03/30 20:59:34 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putuint(unsigned int num)
{
	int	i;

	i = 0;
	if (num < 10)
		i += ft_putchar(num + '0');
	else
	{
		i += ft_putuint(num / 10);
		i += ft_putchar(num % 10 + '0');
	}
	return (i);
}
