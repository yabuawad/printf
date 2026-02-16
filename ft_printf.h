/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <yabuawad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:41:13 by yabuawad          #+#    #+#             */
/*   Updated: 2025/09/01 13:33:55 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_puthex_low(unsigned int nbr);
int		ft_puthex_up(unsigned int nbr);
int		ft_putnbr(int n);
char	*ft_strdup(const char *s);
int		ft_strlen(const char *str);
int		ft_p(void *ptr);
int		ft_printf(const char *format, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_u(unsigned int n);
#endif
