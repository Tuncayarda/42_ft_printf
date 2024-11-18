/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:40:42 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/17 21:49:23 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	rtn;

	rtn = 0;
	if (!s)
		return (ft_putstr("(null)"));
	while (*s)
	{
		rtn += ft_putchar(*s);
		s++;
	}
	return (rtn);
}
