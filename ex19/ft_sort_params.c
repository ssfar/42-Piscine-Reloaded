/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssfar <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 15:30:18 by ssfar             #+#    #+#             */
/*   Updated: 2018/11/08 17:35:34 by ssfar            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	while (--argc > 0)
	{
		i = argc;
		while (--i > 0)
			if (ft_strcmp(argv[argc], argv[i]) < 0)
			{
				tmp = argv[argc];
				argv[argc] = argv[i];
				argv[i] = tmp;
			}
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i++]);
		ft_putchar('\n');
	}
}
