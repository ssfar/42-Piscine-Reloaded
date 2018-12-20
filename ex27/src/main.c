/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 21:16:57 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/08 11:52:44 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"
#include "ft_read.h"

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putstr("File name missing.\n");
	else
		argc > 2 ? ft_putstr("Too many arguments.\n") : ft_read(argv[1]);
}
