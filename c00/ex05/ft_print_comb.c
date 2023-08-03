/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 23:30:08 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/14 08:03:09 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(int a, int b, int c)
{
	write (1, &c, 1);
	write (1, &b, 1);
	write (1, &a, 1);
	if (a + b + c != '7' + '8' + '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{	
	int	a;
	int	b;
	int	c;

	a = '2';
	b = '1';
	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
				a = b + 1;
			while (a <= '9')
			{
				ft_print(a, b, c);
				a++;
			}
			b++;
		}
		c++;
	}
}
