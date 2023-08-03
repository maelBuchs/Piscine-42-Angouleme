/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <oss@xtrm.me>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:06:48 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/31 15:11:42 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int(*f)(int))
{
	int	i;
	int	*value_tab;

	i = 0;
	value_tab = malloc(sizeof(int) * lenght);	
	while (i < length)
	{
		value_tab[i] = (*f)(tab[i]);
		i++;
	}
	return (value_tab);
}
