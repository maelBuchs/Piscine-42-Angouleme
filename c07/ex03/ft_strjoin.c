/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 13:42:26 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/24 17:38:55 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		strs_size;
	char	*final_str;

	final_str = NULL;
	if (size == 0)
		return (final_str);
	i = 0;
	strs_size = 0;
	while (i < size)
	{
		strs_size += ft_strlen(*(strs + i)) + ft_strlen(sep);
		i++;
	}
	strs_size -= ft_strlen(sep);
	final_str = malloc(strs_size * sizeof(char));
	i = 0;
	while (i < size)
	{
		ft_strcat(final_str, *(strs + i));
		i++;
		if (i != size)
			ft_strcat(final_str, sep);
	}
	return (final_str);
}
