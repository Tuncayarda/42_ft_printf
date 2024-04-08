/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuaydin <tuaydin@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 14:51:06 by tuaydin           #+#    #+#             */
/*   Updated: 2024/04/09 00:33:41 by tuaydin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_print
{
	char	v_type;
	char	f_flg;
	char	s_flg;
	int		f_flgs;
	int		s_flgs;
	int		width;
}	t_print;

int		ft_printf(const char *str, ...);
int		ft_defineflag(va_list *args, const char **sptr);
int		ft_print(va_list *args, t_print p_data);
int		ft_putchar(char c);
int		ft_uatoi(const char **sptr);
int		ft_isflag(char c);
int		ft_isvalidtype(char c);
char	ft_readflag(const char **sptr);
char	ft_readtype(const char **sptr);
int		ft_printc(t_print p_data, char c);
int		ft_putcharwidth(int width, char c);
int		ft_putcharminus(int size, char c);
void	ft_passflag(const char **sptr);
int		ft_prints(t_print p_data, char *str);
int		ft_putstr(char *s);
int		ft_putstrwidth(int width, char *str);
int		ft_putstrdot(int size, char *str);
int		ft_putstrwidthdot(int width, int size, char *str);
int		ft_putstrminus(int size, char *str);
int		ft_putstrminusdot(int m_size, int d_size, char *str);
int		ft_strlen(char *s);
int		ft_printp(t_print p_data, unsigned long val);
int		ft_putaddress(unsigned long addressValue, int put_head);
int		ft_putadrwidth(int width, unsigned long val);
int		ft_putadrminus(int size, unsigned long val);
int		ft_printid(t_print p_data, long val);
int		ft_putnbr(long n);
int		ft_nbrlen(long val);
int		ft_putnbrwidth(int width, long val);
int		ft_putnbrdot(int size, long val);
int		ft_putnbrminus(int size, long val);
int		ft_putnbrminusdot(int size, int width, long val);
int		ft_putnbrzero(int size, long val);
int		ft_putnbrzerodot(int z_size, int d_size, long val);
int		ft_putnbrspace(long val);
int 	ft_putnbrplus(long val);

int		ft_printx(t_print p_data, unsigned int val, int upper);
int		ft_puthex(unsigned int val, int upper);
int		ft_puthexwidth(int width, unsigned int val, int upper);
int		ft_puthexdot(int size, unsigned int val, int upper);
int		ft_puthexminus(int size, unsigned int val, int upper);
int		ft_puthexminusdot(int m_val, int d_val, unsigned int val, int upper);
int		ft_hexlen(unsigned int val);
int		ft_puthexzero(int width, unsigned int val, int upper);
int		ft_puthexzerodot(int z_size, int d_size, unsigned int val, int upper);
int		ft_puthexhash(unsigned int val, int upper);
int		ft_puthexwidthdot(int z_size, int d_size, unsigned int val, int upper);
#endif
