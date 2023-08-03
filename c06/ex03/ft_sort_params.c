/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:10:00 by mbuchs            #+#    #+#             */
/*   Updated: 2023/07/20 18:35:40 by mbuchs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	diff;
	int	i;

	diff = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
			i++;
	if (s1[i] != s2[i])
		diff = s1[i] - s2[i];
	return (diff);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (j > 0)
	{
		while (i < size -1)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				ft_swap(&tab[i], &tab[i + 1]);
			}
			i++;
		}
		j --;
		i = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_sort_int_tab(argv + 1, argc - 1);
	i = 1;
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}	
