/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 18:28:05 by fptacek           #+#    #+#             */
/*   Updated: 2022/12/06 18:18:17 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;

	i = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	*range = arr;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (min < max)
	{
		while (min < max)
		{
			i++;
			min++;
		}
		return (i);
	}
	return (-1);
}
/*int	main(void)
{
	int	n = 664;
	int	x = 1566;
	int	v;
	int	*pole;

	v = ft_ultimate_range(&pole, n, x);
	printf("%d", v);
	return (0);
}*/
