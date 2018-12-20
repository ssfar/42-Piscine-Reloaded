/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 11:32:03 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/08 12:14:12 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_H
# define FT_READ_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include "ft_putstr.h"
# define BUF_SIZE 70

int		ft_read(char *file_name);
#endif
