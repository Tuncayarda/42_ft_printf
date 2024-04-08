/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:54:18 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 22:06:16 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_prints(t_print p_data, char *str)
{
	if (p_data.f_flg == 0 && p_data.s_flg == 0)
		return (ft_putstr(str));
	if ( p_data.f_flg == 'w' && p_data.s_flg == 0)
		return (ft_putstrwidth(p_data.f_flgs, str));
	if (p_data.f_flg == '.' && p_data.s_flg == 0)
		return (ft_putstrdot(p_data.f_flgs, str));
	if (p_data.f_flg == 'w' && p_data.s_flg == '.')
		return (ft_putstrwidthdot(p_data.f_flgs, p_data.s_flgs, str));
	if (p_data.f_flg == '-' && p_data.s_flg == 0)
		return (ft_putstrminus(p_data.f_flgs, str));
	if (p_data.f_flg == '-' && p_data.s_flg == '.')
		return (ft_putstrminusdot(p_data.f_flgs, p_data.s_flgs, str));
	return (1);
}
