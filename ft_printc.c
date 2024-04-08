/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:44:22 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 22:05:38 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printc(t_print p_data, char c)
{
	if (p_data.f_flg == 0 && p_data.s_flg == 0)
		return (ft_putchar(c));
	if (p_data.f_flg == 'w' && p_data.s_flg == 0)
		return (ft_putcharwidth(p_data.f_flgs, c));
	if (p_data.f_flg == '-' && p_data.s_flg == 0)
		return (ft_putcharminus(p_data.f_flgs, c));
	return (1);
}
