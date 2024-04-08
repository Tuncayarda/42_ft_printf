/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:59:52 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 22:06:41 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printp(t_print p_data, unsigned long val)
{
	if (p_data.f_flg == 0 && p_data.s_flg == 0)
		return (ft_putaddress(val, 1));
	if (p_data.f_flg == 'w' && p_data.s_flg == 0)
		return (ft_putadrwidth(p_data.f_flgs, val));
	if (p_data.f_flg == '-' && p_data.s_flg == 0)
		return (ft_putadrminus(p_data.f_flgs, val));
	return (1);
}
