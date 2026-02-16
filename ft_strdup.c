/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabuawad <1910yara@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:23:05 by yabuawad          #+#    #+#             */
/*   Updated: 2025/08/20 17:27:45 by yabuawad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = ft_strlen(s);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (s[i] != '\0')
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*ch;
// 	char	*res;

// 	ch = "qwwwwww";
// 	res = ft_strdup(ch);
// 	printf("%s", res);
// }
