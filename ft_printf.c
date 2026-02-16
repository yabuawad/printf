/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <yabuawad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 13:15:34 by yabuawad          #+#    #+#             */
/*   Updated: 2025/09/01 13:38:30 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_form_int(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'i' || specifier == 'd')
	{
		count += ft_putnbr(va_arg(args, int));
	}
	else if (specifier == 'u')
	{
		count += ft_u(va_arg(args, unsigned int));
	}
	return (count);
}

int	ft_form_hexa(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'x')
	{
		count += ft_puthex_low(va_arg(args, unsigned int));
	}
	else if (specifier == 'X')
	{
		count += ft_puthex_up(va_arg(args, unsigned int));
	}
	else if (specifier == 'p')
	{
		count += ft_p(va_arg(args, void *));
	}
	return (count);
}

int	ft_form_char(char specifier, va_list args)
{
	int	count;

	count = 0;
	if (specifier == 'c')
	{
		ft_putchar(va_arg(args, int));
		count += 1;
	}
	else if (specifier == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (specifier == '%')
	{
		write(1, "%", 1);
		count += 1;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == '%' || format[i] == 's' || format[i] == 'c')
				count += ft_form_char(format[i], args);
			else if (format[i] == 'x' || format[i] == 'X' || format[i] == 'p')
				count += ft_form_hexa(format[i], args);
			else if (format[i] == 'i' || format[i] == 'd' || format[i] == 'u')
				count += ft_form_int(format[i], args);
		}
		else
			count += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
/*
int	main(void)
{
	ft_printf("%x\n", -1);
	printf("%x", -1);
}
*/
