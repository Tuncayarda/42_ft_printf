/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 01:12:01 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 01:31:06 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (c == '\0')
		return (0);
	while (s[i] != '%'&& s[i])
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}
