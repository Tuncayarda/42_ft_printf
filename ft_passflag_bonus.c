/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_passflag_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:47:58 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 22:03:43 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
 
void	ft_passflag(const char **sptr)
{
	char	c;

	c = **sptr;
	while (**sptr == c)
		(*sptr)++;
}
