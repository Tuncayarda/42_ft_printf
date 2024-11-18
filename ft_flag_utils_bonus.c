/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:46:26 by tuaydin           #+#    #+#             */
/*   Updated: 2024/10/18 21:45:07 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_isflag(char c)
{
	if (c == '-' || c == '0' || c == '.' || c == '#' || c == ' ' || c == '+')
		return (c);
	return (0);
}

void	ft_passflag(char **sptr)
{
	char	c;

	c = ft_isflag(**sptr);
	while (**sptr == c)
		(*sptr)++;
}

char	ft_isvalidtype(char c)
{
	if (c == 'c' || c == 's' || c == 'p'
		|| c == 'd' || c == 'i' || c == 'u'
		|| c == 'x' || c == 'X' || c == '%')
		return (c);
	return (0);
}
