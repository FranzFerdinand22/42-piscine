/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 22:52:44 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/24 12:22:51 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
		{
			while ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
				|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
				i++;
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str[i] -= 32;
		}
		else if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	str[i] = '\0';
	return (str);
}
int main(void)
{
	char	c[200] = "VD  gggdgdgf    k8 hfhgfhf n ";

	printf("%s", ft_strcapitalize(c));
	return(0);
	
}
