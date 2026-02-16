/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <yabuawad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 18:15:29 by yabuawad          #+#    #+#             */
/*   Updated: 2025/08/31 14:14:27 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	get_len_ul(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		++len;
		nbr /= 16;
	}
	return (len);
}

static char	*ft_itoabase_low_ul(unsigned long nbr)
{
	char	*result;
	char	*dig;
	int		len;

	dig = "0123456789abcdef";
	len = get_len_ul(nbr);
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (len > 0)
	{
		len--;
		result[len] = dig[nbr % 16];
		nbr /= 16;
	}
	return (result);
}

int	ft_p(void *ptr)
{
	int				count;
	unsigned long	addr;
	char			*s;

	count = 0;
	addr = (unsigned long)ptr;
	if (!addr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	s = ft_itoabase_low_ul(addr);
	if (!s)
		return (-1);
	count += write(1, s, ft_strlen(s));
	free(s);
	return (count);
}
