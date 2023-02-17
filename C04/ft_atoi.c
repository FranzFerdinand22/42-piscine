/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 13:12:33 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/29 15:22:42 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	minus;
	int	atoi;

	minus = 1;
	atoi = 0;
	while ((*str >= '\t' && *str <= '\r') || (*str == ' '))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = (atoi * 10) + (*str - 48);
		str++;
	}
	return (atoi * minus);
}
/*int	main(void)
{
	printf("%d", ft_atoi("   --+++---3431354436lkf44"));
	return(0);
}*/
