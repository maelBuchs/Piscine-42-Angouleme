/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:30:13 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/18 17:06:55 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(char*str)
{
	int	i;
	int	total_plus_minus;
	int	total;

	total_plus_minus = 1;
	total = 0;
	i = 0;
	while ((str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')) && str[i])
		i++;
	while ((str[i] == '+' || str[i] == '-') && str[i])
	{
		if (str[i] == '-')
			total_plus_minus *= -1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i])
	{
		total += (str[i] - '0');
		total *= 10;
		i++;
	}
	if (total_plus_minus < 0)
		total = -total;
	return (total);
}
