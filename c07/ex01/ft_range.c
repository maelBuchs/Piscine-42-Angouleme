/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:17:38 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/24 17:43:23 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;
	int	j;

	tab = NULL;
	j = 0;
	i = min;
	size = 0;
	while (i < max)
	{
		i++;
		size++;
	}
	if (min >= max)
		return (tab);
	i = min;
	tab = malloc(size * sizeof(int));
	while (i < max)
	{
		tab[j] = i;
		i++;
		j++;
	}
	return (tab);
}
