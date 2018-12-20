/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:10:14 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/08 17:10:34 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		len;

	tab = NULL;
	len = max - min;
	if (min >= max || !(tab = (int*)malloc(sizeof(*tab) * len)))
		return (tab);
	while (len > 0)
		tab[--len] = --max;
	return (tab);
}
