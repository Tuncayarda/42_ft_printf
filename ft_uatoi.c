/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:07:48 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 22:00:56 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uatoi(const char **sptr)
{
	int	result;

	result = 0;
	while (**sptr >= '0' && **sptr <= '9')
	{
		result *= 10;
		result += **sptr - '0';
		(*sptr)++;
	}
	return (result);
}
