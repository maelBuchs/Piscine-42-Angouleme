/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 23:30:08 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/14 19:30:19 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c, int d)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, " ", 1);
	write (1, &c, 1);
	write (1, &d, 1);
	if (!(a == '9' && b == '8'))
	{
		write (1, ", ", 2);
	}
}

void	ft_check_print(int a, int b, int c, int d)
{
	if (a < c)
	{
		ft_print(a, b, c, d);
	}
	if (a == c)
	{
		if (b < d)
		{
			ft_print(a, b, c, d);
		}
	}
}

void	ft_collumn_2(int a, int b, int c, int d)
{
	while (c <= '9')
	{
		while (d <= '9')
		{
			ft_check_print(a, b, c, d);
			d++;
		}
		d = '0';
		c++;
	}
	c = '0';
}

void	ft_print_comb2(void)
{	
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			ft_collumn_2(a, b, c, d);
			b++;
		}
		a++;
	}
}
