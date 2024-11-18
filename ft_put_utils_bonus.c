/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_utils_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:47:01 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:27:59 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_minus(t_fdata p_data, char c)
{
	int	count;

	count = 0;
	count += ft_putchar(c);
	while (p_data.ff_val > 1)
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	return (count);
}

int	ft_putstr_minus(t_fdata p_data, char *str)
{
	int	count;

	count = 0;
	count += ft_putstr(str);
	while (p_data.ff_val > ft_strlen(str))
	{
		count += ft_putchar(' ');
		p_data.ff_val--;
	}
	return (count);
}
