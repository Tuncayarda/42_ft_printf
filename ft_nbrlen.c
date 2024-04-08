/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:03:39 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 20:27:16 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(long val)
{
	int length;
	
	length = 0;
    if (val == 0)
        return (1);
    if (val < 0)
	{
		length++;
		val = -val;
	}
    while (val != 0) {
        val /= 10;
        length++;
    }
    return (length);
}
