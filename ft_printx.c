/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 23:48:22 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 00:32:07 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printx(t_print p_data, unsigned int val, int upper)
{
	if (p_data.f_flg == 0 && p_data.s_flg == 0)
		return (ft_puthex(val, upper));
	if (p_data.f_flg == 'w' && p_data.s_flg == 0)
		return (ft_puthexwidth(p_data.f_flgs, val, upper));
	if (p_data.f_flg == '.' && p_data.s_flg == 0)
		return (ft_puthexdot(p_data.f_flgs, val, upper));
	if (p_data.f_flg == '-' && p_data.s_flg == 0)
		return (ft_puthexminus(p_data.f_flgs, val, upper));
	if (p_data.f_flg == '-' && p_data.s_flg == '.')
		return (ft_puthexminusdot(p_data.f_flgs, p_data.s_flgs, val, upper));
	if (p_data.f_flg == '0' && p_data.s_flg == 0)
		return (ft_puthexzero(p_data.f_flgs, val, upper));
	if (p_data.f_flg == '0' && p_data.s_flg == '.')
		return (ft_puthexzerodot(p_data.f_flgs, p_data.s_flgs, val, upper));
	if (p_data.f_flg == '#' && p_data.s_flg == 0)
		return (ft_puthexhash(val, upper));
	if (p_data.f_flg == 'w' && p_data.s_flg == '.')
		return (ft_puthexwidthdot(p_data.f_flgs, p_data.s_flgs, val, upper));
	return (1);
}
