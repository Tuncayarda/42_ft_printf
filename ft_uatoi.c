/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uatoi.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:45:02 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:48:15 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uatoi(char **sptr)
{
	size_t	rtn;

	rtn = 0;
	while (**sptr >= '0' && **sptr <= '9')
	{
		rtn *= 10;
		rtn += **sptr - '0';
		(*sptr)++;
	}
	return (rtn);
}

int	ft_uatoi1(char *sptr)
{
	size_t	rtn;

	rtn = 0;
	while (*sptr >= '0' && *sptr <= '9')
	{
		rtn *= 10;
		rtn += *sptr - '0';
		sptr++;
	}
	return (rtn);
}
