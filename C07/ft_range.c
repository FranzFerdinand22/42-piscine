/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:22:43 by fptacek           #+#    #+#             */
/*   Updated: 2022/12/06 18:37:21 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*ptr;

	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
int	main(void)
{
	int	i = 2;
	int	k = 26;
	int	*t;
	int	n = 0;

	t = ft_range(i, k);
	while (i < k)
	{
		printf("%d\n", t[n]);
	n++;
	i++;
	}
	return (0);
}
