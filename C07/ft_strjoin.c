/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 22:47:24 by fptacek           #+#    #+#             */
/*   Updated: 2022/12/06 19:04:26 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		x;
	int		y;
	char	*arr;

	i = 0;
	x = 0;
	arr = (char *)malloc (ft_strlen(strs[x]) * sizeof(char **));
	while (x < size)
	{
		y = 0;
		while (strs[x][y] != '\0')
			arr[i++] = strs[x][y++];
		y = 0;
		while (sep[y] != '\0' && x != size - 1)
			arr[i++] = sep[y++];
		x++;
	}
	arr[i] = '\0';
	return (arr);
}
int	main(void)
{
	char	*c[3];
	c[0] = "Tohlemvav";
	c[1] = "jejiofjwei";
	c[2] = "ABCL";

	printf("%s", ft_strjoin(3, c, "|"));
	return (0);
}
