/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <oss@xtrm.me>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:35:45 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/27 23:14:24 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strdup(char *src, char *charset)
{
	char	*dest;
	int		len;

	len = 1;
	while (src[len - 1] != 0 && !is_charset(src[len - 1], charset))
		len++;
	dest = malloc(len * sizeof(char));
	len = 0;
	while (src[len] && !is_charset(src[len], charset))
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = 0;
	return (dest);
}

int	ft_separation_nbr(char *str, char *charset)
{
	int		i;
	int		j;
	int		letter;

	letter = 0;
	i = 0;
	j = 0;
	while (str[i])
	{
		if (is_charset(str[i], charset) == 1
			&& is_charset(str[i + 1], charset) == 0 && i
			&& str[i + 1] != 0 && i - 1 && letter > 0)
			j++;
		if (is_charset(str[i], charset) == 0)
				letter++;
		i++;
	}
	j++;
	return (j);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	char	**tab;

	tab = malloc((ft_separation_nbr(str, charset) + 1) * sizeof(char *));
	if (tab == NULL)
	{
		return (tab);
	}	
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_charset(str[i], charset))
			i++;
		if (str[i])
		{
			tab[j] = ft_strdup(&str[i], charset);
			j++;
		}
		while (str[i] && !is_charset(str[i], charset))
			i++;
	}
	tab[j] = 0;
	return (tab);
}
