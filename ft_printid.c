/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:50:01 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 23:38:51 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printid(t_print p_data, long val)
{
	if (p_data.f_flg == 0 && p_data.s_flg == 0)
		return (ft_putnbr(val));
	if (p_data.f_flg == 'w' && p_data.s_flg == 0)
		return (ft_putnbrwidth(p_data.f_flgs, val));
	if (p_data.f_flg == '.' && p_data.s_flg == 0)
		return (ft_putnbrdot(p_data.f_flgs, val));
	if (p_data.f_flg == '-' && p_data.s_flg == 0)
		return (ft_putnbrminus(p_data.f_flgs, val));
	if (p_data.f_flg == '-' && p_data.s_flg == '.')
		return (ft_putnbrminusdot(p_data.f_flgs, p_data.s_flgs, val));
	if (p_data.f_flg == '0' && p_data.s_flg == 0)
		return (ft_putnbrzero(p_data.f_flgs, val));
	if (p_data.f_flg == '0' && p_data.s_flg == '.')
		return (ft_putnbrzerodot(p_data.f_flgs, p_data.s_flgs, val));
	if (p_data.f_flg == ' ' && p_data.s_flg == 0)
		return (ft_putnbrspace(val));
	if (p_data.f_flg == '+' && p_data.s_flg == 0)
		return (ft_putnbrplus(val));
	return (1);
}
