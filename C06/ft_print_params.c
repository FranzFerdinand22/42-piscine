/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:12:02 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/30 19:47:02 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = 1;
	y = 0;
	while (x < argc)
	{
		while (argv[x][y] != '\0')
		{
			ft_putchar(argv[x][y]);
			y++;
		}
		ft_putchar('\n');
		x++;
		y = 0;
	}
	return (0);
}
