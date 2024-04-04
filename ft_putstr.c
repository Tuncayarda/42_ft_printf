/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 03:59:10 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/04 16:58:14 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s, int wr)
{
	int	i;

	i = 0;
	if (!s)
		return (ft_putstr("(null)", wr));
	while (s[i])
		i += ft_putchar(s[i], wr);
	return (i);
}
