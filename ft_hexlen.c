/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 23:57:27 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 00:05:40 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlen(unsigned int val)
{
    int length;
	
	length = 0;
	if (val == 0)
		return (1);
    while (val != 0) 
	{
        val /= 16;
        length++;
    }
    return (length);
}
