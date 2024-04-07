/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:43:00 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/08 01:25:12 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c, int wr);
int		ft_putstr(char *s, int wr);
int		ft_putaddress(unsigned long addressValue, int wr);
int		ft_putnbr(int n, int wr);
int		ft_putuint(unsigned int num, int wr);
int		ft_puthex(unsigned int val, int upper, int wr);

int		ft_managenbr(const char **sptr, int n);
int		ft_uatoi(const char **nptr, int skipf);
int		ft_managenbrminflag(const char **sptr, int n);
int		ft_managenbrzeroflag(const char **sptr, int n);
int		ft_managenbrdotflag(const char **sptr, int n);
int		ft_managenoflag(const char **str, int n);

int		ft_manageminanddotflag(const char **sptr, int n, int mopv, int dopv);
int		ft_managezeroanddotflag(const char **sptr, int n, int zopv, int dopv);

int		ft_manageaddress(unsigned long n, const char **sptr);
int		ft_manageadrminflag(const char **sptr, unsigned long n);

int		ft_strrchr(const char *s, int c);

#endif