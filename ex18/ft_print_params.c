/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:08:47 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/06 19:17:58 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
	argc = 0;
}
