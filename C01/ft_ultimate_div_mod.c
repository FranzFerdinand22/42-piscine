/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 16:38:37 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/21 17:13:50 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a;
	j = *b;
	*a = i / j;
	*b = i % j;
}
/*int	main(void)
{
	int	pa = 53;
	int	pb = 5;

	ft_ultimate_div_mod(&pa, &pb);
	printf("%d\n" "%d", pa, pb);
	return(0);
}*/
