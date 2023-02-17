/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 19:35:02 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/23 11:28:20 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int     main(void)
{
        char    c[20] = "5456546jk";

        printf("%d", ft_str_is_numeric(c));
        return(0);

}*/
