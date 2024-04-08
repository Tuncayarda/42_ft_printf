/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsflags_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:58:27 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 18:53:28 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstrwidth(int width, char *str)
{
	int	count;

	count = 0;
	if (!str)
		while (width-- > 6)
			count += ft_putchar(' ');
	else if (width < ft_strlen(str))
		return (ft_putstr(str));
	else
		while (width-- > ft_strlen(str))
			count += ft_putchar(' ');
	count += ft_putstr(str);
	return (count);
}

int	ft_putstrdot(int size, char *str)
{
	int		count;
	
	count = 0;
	if (!str)
	{
		if (size < 6)
			return (count);
		count += ft_putstr("(null)");
	}
	else
		while (size-- > 0 && *str)
			count += ft_putchar(*str++);
	
	return (count);
}

int	ft_putstrwidthdot(int width, int size, char *str)
{
	int	count;

	count = 0;
	while (width-- > size)
		count += ft_putchar(' ');
	count += ft_putstrdot(size, str);
	return (count);
}

int	ft_putstrminus(int size, char *str)
{
	int	count;

	count = 0;
	if (size < ft_strlen(str))
		return (ft_putstr(str));
	count += ft_putstr(str);
	while (size-- > ft_strlen(str))
		count += ft_putchar(' ');
	return (count);
}

int	ft_putstrminusdot(int m_size, int d_size, char *str)
{
	int	count;
	int	max_size;

	count = 0;
	while (d_size-- > 0 && *str)
		count += ft_putchar(*str++);
	max_size = count;
	while (m_size-- > max_size)
		count += ft_putchar(' ');
	return (count);
}
