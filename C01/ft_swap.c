/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fptacek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 20:50:51 by fptacek           #+#    #+#             */
/*   Updated: 2022/11/21 00:07:00 by fptacek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}
/*int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 5;
	b = 1;
	pa = &a;
	pb = &b;

	ft_swap(pa, pb);
	printf ("%d" "%d", *pa, *pb);
	return(0);
}*/
