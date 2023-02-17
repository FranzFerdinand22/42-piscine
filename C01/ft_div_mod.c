/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:07:47 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/21 14:11:40 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int main(void)
{
	int d;
	int pd;
	int i;
	int j;
	i = 16;
	j = 5;

	ft_div_mod(i, j, &d, &pd);
	printf("%d\n", d);
        printf("%d\n", pd);
	return(0);
}*/
