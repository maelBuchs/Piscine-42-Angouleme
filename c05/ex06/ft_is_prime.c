/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 22:37:27 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/20 01:13:17 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i <= nb && i < 46340)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt_nb;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2147483647)
		return (1);
	sqrt_nb = ft_sqrt(nb);
	while (i <= sqrt_nb)
	{
		if (nb % i == 0 && i != nb)
			return (0);
		if (i == 2)
			i++;
		else
			i += 2;
	}
	return (1);
}
