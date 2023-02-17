/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:38:13 by fptacek           #+#    #+#             */
/*   Updated: 2022/12/05 14:20:39 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*int	main(void)
{
	printf("%d", ft_is_prime(4));
	return (0);
}*/
