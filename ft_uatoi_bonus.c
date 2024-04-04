/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uatoi_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 17:05:07 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 20:25:03 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uatoi(const char **nptr)
{
	int	result;

	result = 0;
	while (**nptr == '.' || **nptr == '0' || **nptr == '-' || **nptr == 32
		|| (**nptr >= 9 && **nptr <= 13))
	{
		(*nptr)++;
	}
	while (**nptr >= '0' && **nptr <= '9')
	{
		result *= 10;
		result += **nptr - '0';
		(*nptr)++;
	}
	return (result);
}
