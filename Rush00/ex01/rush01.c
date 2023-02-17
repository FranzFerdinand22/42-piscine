/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcihakov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:26:17 by kcihakov          #+#    #+#             */
/*   Updated: 2022/11/20 15:37:17 by kcihakov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	error_message(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(1, "input number must be between 1 and 2147483647\n", 46);
		return (1);
	}
	return (0);
}

void	radek1(int x)
{
	int	a;

	a = 1;
	while (a <= x)
	{
		if (a == 1)
			ft_putchar('/');
		if (a > 1 && a < x)
		{
			ft_putchar('*');
		}
		if (a == x && a != 1)
		{
			ft_putchar(92);
		}
		a++;
	}
}

void	radekx(int x)
{
	int	c;

	c = 1;
	while (c <= x)
	{
		if (c == 1)
			ft_putchar('*');
		if (c > 1 && c < x)
		{
			ft_putchar(' ');
		}
		if (c == x && c != 1)
		{
			ft_putchar('*');
		}
		c++;
	}	
}

void	radekp(int x)
{
	int	d;

	d = 1;
	while (d <= x)
	{
		if (d == 1)
			ft_putchar(92);
		if (d > 1 && d < x)
		{
			ft_putchar('*');
		}
		if (d == x && d != 1)
		{
			ft_putchar('/');
		}
		d++;
	}
}

void	rush(int x, int y)
{
	int	b;

	if (error_message (x, y) == 1)
		return ;
	b = 1;
	while (b <= y)
	{
		if (b == 1)
		{
			radek1(x);
		}
		if (b > 1 && b < y)
		{
			ft_putchar('\n');
			radekx(x);
		}
		if (b == y && b != 1)
		{
			ft_putchar('\n');
			radekp(x);
		}
		b++;
	}
	ft_putchar('\n');
}
