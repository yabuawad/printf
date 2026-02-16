/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:37:23 by yabuawad          #+#    #+#             */
/*   Updated: 2025/09/01 13:38:57 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_up(unsigned int nbr)
{
	char	*dig;
	int		count;

	dig = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16)
		count += ft_puthex_up(nbr / 16);
	count += write(1, &dig[nbr % 16], 1);
	return (count);
}
