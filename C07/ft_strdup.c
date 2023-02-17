/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 15:44:39 by fptacek           #+#    #+#             */
/*   Updated: 2022/12/06 17:30:13 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *scr)
{
	int		i;
	int		k;
	char	*ptr;

	i = 0;
	k = 0;
	ptr = (char *)malloc(ft_strlen(scr) * sizeof(char));
	while (scr[i] != '\0')
	{
		ptr[k] = scr[i];
		i++;
		k++;
	}
	if (ptr == NULL)
		return (NULL);
	ptr[k] = '\0';
	return (ptr);
}
/*int	main(void)
{
	char	*p;
	char	arr[] = "shiuhi";
	printf("%s\n", arr);
	p = ft_strdup(arr);
	printf("%s\n", p);
	return (0);
}*/
