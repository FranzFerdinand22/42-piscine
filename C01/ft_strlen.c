/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 18:14:48 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/21 18:30:30 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int 	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	
	return(i);
}	

char	*ft_rev_print(char *str)
{
	int		i;
	
	i = ft_strlen(str);
	i--;
	while(i >= 0 )
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}

int	main(void)
{
	char c[] = "Viden000";
	ft_rev_print(c);
	return(0);
}
