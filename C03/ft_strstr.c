/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 20:16:08 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/28 15:17:47 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (ft_strlen(to_find) == 0)
		return (str);
	while (str[i])
	{
		if (str[i] != to_find[j])
			i++;
		while (str[i] == to_find[j])
		{
			i++;
			j++;
			if (to_find[j] == '\0')
				return (&str[i - ft_strlen(to_find)]);
		}
		j = 0;
	}
	return ((void *)0);
}
int main(void)
{
    char c[20] = "ma mac";
    char d[20] = "mac";

    printf("%s", ft_strstr(c,d));
    return 0;
}
