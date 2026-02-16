/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:37:30 by yabuawad          #+#    #+#             */
/*   Updated: 2025/09/01 13:37:38 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned int nbr)
{
	char	*dig;
	int		count;

	dig = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
		count += ft_puthex_low(nbr / 16);
	count += write(1, &dig[nbr % 16], 1);
	return (count);
}
