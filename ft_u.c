/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:28:27 by yabuawad          #+#    #+#             */
/*   Updated: 2025/08/28 18:49:41 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u(unsigned int n)
{
	int		count;
	char	digit;

	count = 0;
	if (n > 9)
	{
		count += ft_u(n / 10);
	}
	digit = (n % 10) + 48;
	count += write(1, &digit, 1);
	return (count);
}
