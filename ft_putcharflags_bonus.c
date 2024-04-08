/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putcharflags_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:32:57 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 16:43:22 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putcharwidth(int width, char c)
{
	int	count;

	count = 0;
	while (width-- > 1)
		count += ft_putchar(' ');
	count += ft_putchar(c);
	return (count);
}

int	ft_putcharminus(int size, char c)
{
	int	count;
	
	count = 0;
	count += ft_putchar(c);
	while (size-- > 1)
		count += ft_putchar(' ');
	return (count);
}
