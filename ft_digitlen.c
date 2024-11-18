/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digitlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:44:14 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:45:03 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_digitlen(long val)
{
	int	count;

	count = 0;
	if (val == 0)
		return (1);
	if (val < 0)
	{
		val = -val;
		count++;
	}
	while (val > 0)
	{
		val /= 10;
		count++;
	}
	return (count);
}
