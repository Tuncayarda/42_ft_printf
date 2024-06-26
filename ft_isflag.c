/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isflag.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:18:28 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 01:12:03 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isflag(char c)
{
	if (c == '-' || c == '0' || c == '.'
		|| c == '#' || c == ' ' || c == '+')
		return ((int)c);
	else
		return (0);
}
