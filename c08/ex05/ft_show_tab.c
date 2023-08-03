/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 16:38:41 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/26 19:18:48 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putnbr(int nb)
{
	int		to_print;

	if (nb == -2147483648)
	{
		write(1, ("-2147483648"), 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb - nb - nb;
			ft_putnbr(nb);
		}
		else if (nb >= 0)
		{	
		to_print = (nb % 10) + '0';
			if (nb / 10 != 0)
			{
				ft_putnbr(nb / 10);
			}
			write(1, &to_print, 1);
		}
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
