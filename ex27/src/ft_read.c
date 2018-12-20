/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:49:38 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/08 12:08:16 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_read.h"

int		ft_read(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if ((fd = open(file_name, O_RDONLY)) == -1)
	{
		ft_putstr("open() failed\n");
		return (fd);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
	{
		ft_putstr("close() failed\n");
		return (-1);
	}
	return (0);
}
