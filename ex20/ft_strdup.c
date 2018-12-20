/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:47:48 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/08 15:03:38 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	dest = NULL;
	if (!(dest = (char*)malloc(sizeof(*dest) * (ft_strlen(src) + 1))))
		return (dest);
	i = 0;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
